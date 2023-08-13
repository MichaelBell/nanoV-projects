#include <soft-spi.h>
#include <gpio.h>
#include <uart.h>
#define printf uart_printf

#define LCD_CS 0
#define LCD_DC 3
#define LCD_SCK 1
#define LCD_MOSI 2
#define LCD_BL 4

#define REP4(X) X X X X
#define REP16(X) REP4(REP4(X))

// Format: cmd length (including cmd byte), post delay in units of 5 ms, then cmd payload
// Note the delays have been shortened a little
static const uint8_t st7789_init_seq[] = {
        1, 20, 0x01,                         // Software reset
        1, 10, 0x11,                         // Exit sleep mode
        2, 2, 0x3a, 0x55,                   // Set colour mode to 16 bit
        2, 0, 0x36, 0x00,                   // Set MADCTL: row then column, refresh is bottom to top ????
        5, 0, 0x2a, 0x00, 0x00, 0x00, 0xf0, // CASET: column addresses from 0 to 240 (f0)
        5, 0, 0x2b, 0x00, 0x00, 0x00, 0xf0, // RASET: row addresses from 0 to 240 (f0)
        1, 2, 0x21,                         // Inversion on, then 10 ms delay (supposedly a hack?)
        1, 2, 0x13,                         // Normal display on, then 10 ms delay
        1, 2, 0x29,                         // Main screen turn on, then wait 500 ms
        0                                     // Terminate list
};

static void lcd_write_cmd(const uint8_t* cmd, int len) {
    int outputs = get_outputs();
    outputs &= ~((1 << LCD_DC) | (1 << LCD_CS));
    set_outputs(outputs);
    soft_spi_send_bytes(cmd, 1);
    if (len >= 2) {
        outputs |= (1 << LCD_DC);
        set_outputs(outputs);
        soft_spi_send_bytes(cmd+1, len-1);
    }
    outputs |= (1 << LCD_CS);
    set_outputs(outputs);
}

static void delay_loop(int cycles) {
    volatile int i;
    for (i = 0; i < cycles; ++i);
}

static void start_pixels() {
    uint8_t cmd = 0x2C;
    int outputs = get_outputs();
    outputs &= ~((1 << LCD_DC) | (1 << LCD_CS));
    set_outputs(outputs);
    soft_spi_send_bytes(&cmd, 1);
    outputs |= (1 << LCD_DC);
    set_outputs(outputs);
}

static void stop_pixels() {
    int outputs = get_outputs();
    outputs |= ((1 << LCD_DC) | (1 << LCD_CS));
    set_outputs(outputs);    
}

void setup_lcd()
{
    int outputs = get_outputs();
    outputs |= (1 << LCD_BL);
    set_outputs(outputs);

    soft_spi_setup(LCD_SCK, -1, LCD_MOSI, -1);
    
    outputs = get_outputs();
    outputs &= ~(1 << LCD_BL);
    set_outputs(outputs);

    const uint8_t *cmd = st7789_init_seq;
    while (*cmd) {
        lcd_write_cmd(cmd + 2, *cmd);
        delay_loop(*(cmd + 1) * 150);
        cmd += *cmd + 2;
    }

    outputs = get_outputs();
    outputs |= (1 << LCD_BL);
    set_outputs(outputs);

    start_pixels();
    outputs = get_outputs();
    outputs &= ~((1 << LCD_MOSI) | (1 << LCD_SCK));
    int sck_low = outputs;
    int sck_high = outputs | (1 << LCD_SCK);
    for (int i = 0; i < 240*240; ++i) {
        REP16(set_outputs(sck_low);set_outputs(sck_high);)
    }
    set_outputs(sck_low);
    stop_pixels();
}

void lcd_clear_screen(uint16_t colour)
{
    start_pixels();
    uint8_t data[2];
    data[0] = colour >> 8;
    data[1] = colour & 0xFF;
    for (int i = 0; i < 240*240; ++i) {
        soft_spi_send_bytes(data, 2);
    }
    stop_pixels();
}

void lcd_draw_sprite(int x, int y, int w, uint16_t* data, int len)
{
    uint8_t cmd[5];
    cmd[0] = 0x2A;
    cmd[1] = 0;
    cmd[2] = x;
    cmd[3] = 0;
    cmd[4] = x+w-1;
    lcd_write_cmd(cmd, 5);

    cmd[0] = 0x2B;
    cmd[2] = y;
    cmd[4] = 240;
    lcd_write_cmd(cmd, 5);

    start_pixels();
    soft_spi_send_bytes((uint8_t*)data, len*2);
    stop_pixels();
}