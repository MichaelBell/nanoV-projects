#include "lcd.h"
#include <gpio.h>
#include <uart.h>
#define printf uart_printf

void draw_logo(void);

int main(void)
{
    printf("Start\r\n");
    setup_lcd();
    printf("LCD setup\r\n");

    draw_logo();
    
    return 0;
}
