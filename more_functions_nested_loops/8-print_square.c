#include "main.h"

/**
 * print_square - prints square
 * @size: square size
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int up;
		int dw;

		for (up = 0; up < size; up++)
		{
			for (dw = 0; dw < size; dw++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
