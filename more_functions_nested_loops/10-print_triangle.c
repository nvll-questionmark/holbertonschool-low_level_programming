#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size again
 */

void print_triangle(int size)
{
	int tr;
	int angle;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (tr = 1; tr <= size; tr++)
		{
			for (angle = size - tr; angle > 0; angle--)
			{
				_putchar(32);
			}
			for (angle = 1; angle <= tr; angle++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

