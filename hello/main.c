#include <gpio.h>
#include <uart.h>
#define printf uart_printf

#define REP4(X) X X X X
#define REP16(X) REP4(REP4(X))

uint32_t led_data[] = {0x7, 0x3, 0x1, 0, 0x1, 0x2, 0x4};

static void delay_loop(int cycles) {
    volatile int i;
    for (i = 0; i < cycles; ++i);
}

int main(void) {
	int i = 1;
	int j = 1;
	set_leds(led_data[0]);
	printf("Hello, world!\r\n");

	while (1) {
		delay_loop(5000);

		printf("Hello %d\r\n", j);
		j++;
		set_leds(led_data[i++]);
		if (i >= 7) i = 0;
#if 0
		REP16(set_leds(0);set_leds(1);)

		set_leds(led_data[i++]);
		if (i >= sizeof(led_data) / sizeof(led_data[0])) i = 0;

		delay_loop(5000);
		REP16(set_leds(0);set_leds(1);)
		set_leds(led_data[i++]);
		if (i >= sizeof(led_data) / sizeof(led_data[0])) i = 0;

		delay_loop(5000);
		REP16(set_leds(0);set_leds(1);)
		set_leds(led_data[i++]);
		if (i >= sizeof(led_data) / sizeof(led_data[0])) i = 0;

		delay_loop(5000);
		REP16(set_leds(0);set_leds(1);)
		set_leds(led_data[i++]);
		if (i >= sizeof(led_data) / sizeof(led_data[0])) i = 0;

		delay_loop(5000);
		REP16(set_leds(0);set_leds(1);)
		set_leds(led_data[i++]);
		if (i >= sizeof(led_data) / sizeof(led_data[0])) i = 0;
#endif
	}
	return 0;
}
