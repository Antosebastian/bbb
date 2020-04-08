/*
 ============================================================================
 Name        : svn_seg.c
 Author      : Kiran Anto Sebastian
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

void gpio_set()
{
	system("echo out > /sys/class/gpio/gpio66/direction");
	system("echo out > /sys/class/gpio/gpio67/direction");
	system("echo out > /sys/class/gpio/gpio68/direction");
	system("echo out > /sys/class/gpio/gpio44/direction");
	system("echo out > /sys/class/gpio/gpio26/direction");
	system("echo out > /sys/class/gpio/gpio46/direction");
	system("echo out > /sys/class/gpio/gpio65/direction");
}

void gpio_set_off()
{
	system("echo 0 > /sys/class/gpio/gpio66/value");
	system("echo 0 > /sys/class/gpio/gpio67/value");
	system("echo 0 > /sys/class/gpio/gpio68/value");
	system("echo 0 > /sys/class/gpio/gpio44/value");
	system("echo 0 > /sys/class/gpio/gpio26/value");
	system("echo 0 > /sys/class/gpio/gpio46/value");
	system("echo 0 > /sys/class/gpio/gpio65/value");
	printf("fg");
}

void one()
{
	system("echo 0 > /sys/class/gpio/gpio66/value");
	system("echo 1 > /sys/class/gpio/gpio67/value");
	system("echo 1 > /sys/class/gpio/gpio68/value");
	system("echo 0 > /sys/class/gpio/gpio44/value");
	system("echo 0 > /sys/class/gpio/gpio26/value");
	system("echo 0 > /sys/class/gpio/gpio46/value");
	system("echo 0 > /sys/class/gpio/gpio65/value");
}

void two()
{
	system("echo 1 > /sys/class/gpio/gpio66/value");
	system("echo 1 > /sys/class/gpio/gpio67/value");
	system("echo 0 > /sys/class/gpio/gpio68/value");
	system("echo 1 > /sys/class/gpio/gpio44/value");
	system("echo 1 > /sys/class/gpio/gpio26/value");
	system("echo 0 > /sys/class/gpio/gpio46/value");
	system("echo 1 > /sys/class/gpio/gpio65/value");
}

void zero()
{
	system("echo 1 > /sys/class/gpio/gpio66/value");
	system("echo 1 > /sys/class/gpio/gpio67/value");
	system("echo 1 > /sys/class/gpio/gpio68/value");
	system("echo 1 > /sys/class/gpio/gpio44/value");
	system("echo 1 > /sys/class/gpio/gpio26/value");
	system("echo 1 > /sys/class/gpio/gpio46/value");
	system("echo 0 > /sys/class/gpio/gpio65/value");
}

void three()
{
	system("echo 1 > /sys/class/gpio/gpio66/value");
	system("echo 1 > /sys/class/gpio/gpio67/value");
	system("echo 1 > /sys/class/gpio/gpio68/value");
	system("echo 1 > /sys/class/gpio/gpio44/value");
	system("echo 0 > /sys/class/gpio/gpio26/value");
	system("echo 0 > /sys/class/gpio/gpio46/value");
	system("echo 1 > /sys/class/gpio/gpio65/value");
}

void four()
{
	system("echo 0 > /sys/class/gpio/gpio66/value");
	system("echo 1 > /sys/class/gpio/gpio67/value");
	system("echo 1 > /sys/class/gpio/gpio68/value");
	system("echo 0 > /sys/class/gpio/gpio44/value");
	system("echo 0 > /sys/class/gpio/gpio26/value");
	system("echo 1 > /sys/class/gpio/gpio46/value");
	system("echo 1 > /sys/class/gpio/gpio65/value");
}

void five()
{
	system("echo 1 > /sys/class/gpio/gpio66/value");
	system("echo 0 > /sys/class/gpio/gpio67/value");
	system("echo 1 > /sys/class/gpio/gpio68/value");
	system("echo 1 > /sys/class/gpio/gpio44/value");
	system("echo 1 > /sys/class/gpio/gpio26/value");
	system("echo 0 > /sys/class/gpio/gpio46/value");
	system("echo 1 > /sys/class/gpio/gpio65/value");
	system("echo 1 > /sys/class/gpio/gpio68/value");
}

void six()
{
	system("echo 1 > /sys/class/gpio/gpio66/value");
	system("echo 0 > /sys/class/gpio/gpio67/value");
	system("echo 1 > /sys/class/gpio/gpio68/value");
	system("echo 1 > /sys/class/gpio/gpio44/value");
	system("echo 1 > /sys/class/gpio/gpio26/value");
	system("echo 1 > /sys/class/gpio/gpio46/value");
	system("echo 1 > /sys/class/gpio/gpio65/value");
}

void seven()
{
	system("echo 1 > /sys/class/gpio/gpio66/value");
	system("echo 1 > /sys/class/gpio/gpio67/value");
	system("echo 1 > /sys/class/gpio/gpio68/value");
	system("echo 0 > /sys/class/gpio/gpio44/value");
	system("echo 0 > /sys/class/gpio/gpio26/value");
	system("echo 0 > /sys/class/gpio/gpio46/value");
	system("echo 0 > /sys/class/gpio/gpio65/value");
}

void eight()
{
	system("echo 1 > /sys/class/gpio/gpio66/value");
	system("echo 1 > /sys/class/gpio/gpio67/value");
	system("echo 1 > /sys/class/gpio/gpio68/value");
	system("echo 1 > /sys/class/gpio/gpio44/value");
	system("echo 1 > /sys/class/gpio/gpio26/value");
	system("echo 1 > /sys/class/gpio/gpio46/value");
	system("echo 1 > /sys/class/gpio/gpio65/value");
}

void nine()
{
	system("echo 1 > /sys/class/gpio/gpio66/value");
	system("echo 1 > /sys/class/gpio/gpio67/value");
	system("echo 1 > /sys/class/gpio/gpio68/value");
	system("echo 1 > /sys/class/gpio/gpio44/value");
	system("echo 0 > /sys/class/gpio/gpio26/value");
	system("echo 1 > /sys/class/gpio/gpio46/value");
	system("echo 1 > /sys/class/gpio/gpio65/value");
}

void aaa()
{
	system("echo 1 > /sys/class/gpio/gpio66/value");
	system("echo 1 > /sys/class/gpio/gpio67/value");
	system("echo 1 > /sys/class/gpio/gpio68/value");
	system("echo 0 > /sys/class/gpio/gpio44/value");
	system("echo 1 > /sys/class/gpio/gpio26/value");
	system("echo 1 > /sys/class/gpio/gpio46/value");
	system("echo 1 > /sys/class/gpio/gpio65/value");
}

void bbb()
{
	system("echo 1 > /sys/class/gpio/gpio66/value");
	system("echo 1 > /sys/class/gpio/gpio67/value");
	system("echo 1 > /sys/class/gpio/gpio68/value");
	system("echo 1 > /sys/class/gpio/gpio44/value");
	system("echo 1 > /sys/class/gpio/gpio26/value");
	system("echo 1 > /sys/class/gpio/gpio46/value");
	system("echo 1 > /sys/class/gpio/gpio65/value");
}

void ccc()
{
	system("echo 1 > /sys/class/gpio/gpio66/value");
	system("echo 0 > /sys/class/gpio/gpio67/value");
	system("echo 0 > /sys/class/gpio/gpio68/value");
	system("echo 1 > /sys/class/gpio/gpio44/value");
	system("echo 1 > /sys/class/gpio/gpio26/value");
	system("echo 1 > /sys/class/gpio/gpio46/value");
	system("echo 0 > /sys/class/gpio/gpio65/value");
}

void ddd()
{
	system("echo 1 > /sys/class/gpio/gpio66/value");
	system("echo 1 > /sys/class/gpio/gpio67/value");
	system("echo 1 > /sys/class/gpio/gpio68/value");
	system("echo 1 > /sys/class/gpio/gpio44/value");
	system("echo 1 > /sys/class/gpio/gpio26/value");
	system("echo 1 > /sys/class/gpio/gpio46/value");
	system("echo 0 > /sys/class/gpio/gpio65/value");
}

void eee()
{
	system("echo 1 > /sys/class/gpio/gpio66/value");
	system("echo 0 > /sys/class/gpio/gpio67/value");
	system("echo 0 > /sys/class/gpio/gpio68/value");
	system("echo 1 > /sys/class/gpio/gpio44/value");
	system("echo 1 > /sys/class/gpio/gpio26/value");
	system("echo 1 > /sys/class/gpio/gpio46/value");
	system("echo 1 > /sys/class/gpio/gpio65/value");
}

void fff()
{
	system("echo 1 > /sys/class/gpio/gpio66/value");
	system("echo 0 > /sys/class/gpio/gpio67/value");
	system("echo 0 > /sys/class/gpio/gpio68/value");
	system("echo 0 > /sys/class/gpio/gpio44/value");
	system("echo 1 > /sys/class/gpio/gpio26/value");
	system("echo 1 > /sys/class/gpio/gpio46/value");
	system("echo 1 > /sys/class/gpio/gpio65/value");
}

void up_counter()
{
	zero();
	sleep(1);
	gpio_set_off();
	sleep(1);
	one();
	sleep(1);
	gpio_set_off();
	sleep(1);
	two();
	sleep(1);
	gpio_set_off();
	sleep(1);
	three();
	sleep(1);
	gpio_set_off();
	sleep(1);
	four();
	sleep(1);
	gpio_set_off();
	sleep(1);
	five();
	sleep(1);
	gpio_set_off();
	sleep(1);
	six();
	sleep(1);
	gpio_set_off();
	sleep(1);
	seven();
	sleep(1);
	gpio_set_off();
	sleep(1);
	eight();
	sleep(1);
	gpio_set_off();
	sleep(1);
	nine();
	sleep(1);
	gpio_set_off();
	sleep(1);
	aaa();
	sleep(1);
	gpio_set_off();
	sleep(1);
	bbb();
	sleep(1);
	gpio_set_off();
	sleep(1);
	ccc();
	sleep(1);
	gpio_set_off();
	sleep(1);
	ddd();
	sleep(1);
	gpio_set_off();
	sleep(1);
	eee();
	sleep(1);
	gpio_set_off();
	sleep(1);
	fff();
	sleep(1);
}

int main(void)
{
	gpio_set();
	up_counter();
	gpio_set_off();
	return 0;
}
