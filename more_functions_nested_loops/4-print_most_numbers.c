#include "main.h"

/**
 * print_most_numbers - prints the numbers 0-9\n, of course
 * excluding 2 & 4
*/

void print_most_numbers(void)
{
	char mn;

	for (mn = 48; mn < 58; mn++)
	{
		if (mn != 50 && mn != 52)
			_putchar(mn);
	}
	_putchar('\n');
}
