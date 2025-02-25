#include "main.h"

/**
 * print_numbers - prints the numbers 0-9\n, of course
 */

void print_numbers(void)
{
	char num;

	for (num = 48; num < 58; num++)
		_putchar(num);

	_putchar('\n');
}
