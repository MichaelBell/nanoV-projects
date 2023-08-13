#include "lcd.h"
#include <uart.h>
#define printf uart_printf

#include "lcd-text.h"

#include "font.h"

#if 0
struct sprite
{
    uint16_t* data;
    int len;
    int width;
};
#endif

struct ball
{
    int x;
    int y;
    int xvel;
    int yvel;
};

const uint16_t ball_sprite_data[] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00F0, 0x00F0, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x00F0, 0x00F0, 0x00F0, 0x00F0, 0x0000, 0x0000,
    0x0000, 0x00F0, 0x00F0, 0x00F0, 0x00F0, 0x00F0, 0x00F0, 0x0000,
    0x0000, 0x00F0, 0x00F0, 0x00F0, 0x00F0, 0x00F0, 0x00F0, 0x0000,
    0x0000, 0x0000, 0x00F0, 0x00F0, 0x00F0, 0x00F0, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x00F0, 0x00F0, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

uint16_t ball_sprite_move_buf[7*7];

void move_ball(int old_x, int old_y, int inc_x, int inc_y)
{
    int top_x = inc_x > 0 ? 1 : 0;
    int top_y = inc_y > 0 ? 1 : 0;

    for (int y = 0; y < 7; ++y) {
        for (int x = 0; x < 7; ++x) {
            ball_sprite_move_buf[7 * y + x] = ball_sprite_data[8 * (y - top_y + 1) + (x - top_x + 1)];
        }
    }
    lcd_draw_sprite(old_x, old_y, 7, ball_sprite_move_buf, 7*7);
}

int main(void)
{
    //printf("Start\r\n");
    setup_lcd();
    printf("LCD setup\r\n");
    lcd_text_init();

    lcd_display_string("!Hello, world!?!", 10, 10);
    lcd_display_string("NanoV RV32E system\nMike's submission for\nTinyTapeout 4", 10, 50);

    lcd_printf(10, 150, "Printf test: %d %02x", 23, 67);

    struct ball b = {.x=50, .y=230, .xvel=1, .yvel=-1};

    while (1) {
        move_ball(b.x, b.y, b.xvel, b.yvel);

        b.x += b.xvel;
        b.y += b.yvel;

        if (b.x < 5 || b.x > 230) b.xvel = -b.xvel;
        if (b.y < 5 || b.y > 230) b.yvel = -b.yvel;
    }
}
