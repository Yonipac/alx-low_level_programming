#include"main.h"

/**
 * print_number - prints number from 0 to 9 without using standard function
 *
 *
 * Return: void
 */

void print_number(void)
{
	int c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
