#include "main.h"

/**
 * print_diagonal - draws diagonal line on the terminal
 *@n: number of times '\' should be printed
 */

void print_diagonal(int n)
{
	char diag;

	if (n > 0)
	{
		for (diag = 0; diag < n; diag++)
		{
			int spc = diag;

			while (spc > 0)
			{
				_putchar(32);
				spc--;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
{
