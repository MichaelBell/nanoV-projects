#include "lcd.h"
#include <gpio.h>
#include <uart.h>
#define printf uart_printf

void draw_logo(int);

static void delay_loop(int cycles) {
    volatile int i;
    for (i = 0; i < cycles; ++i);
}

int main(void)
{
    printf("Start\r\n");
    setup_lcd();
    printf("LCD setup\r\n");

    int angle = 0;
    while (1) {
      draw_logo(angle);
      angle += 10;
      if (angle == 190) angle -= 360;
      delay_loop(50000);
      lcd_clear_to_black();
    }
    
    return 0;
}
