#include "main.h"

/**
 * print_line - draws a line on the termial
 * @n: # of times the character '_' should be printed
 *
 * Return:
 */

void print_line(int n)
{
	char un = 95;

	if (n > 0)
	{
		for (un = 0; un < n; un++)
			_putchar(95);
	}
	_putchar('\n');
}
