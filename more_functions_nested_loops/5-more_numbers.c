#include "main.h"

/**
 * more_numbers - prints 10 times from 0-14
 */

void more_numbers(void)
{
	int x10 = 0;
	int nl;

	while (x10++ < 10)
	{
		for (nl = 0; nl < 15; nl++)
		{
			if (nl > 9)
			_putchar((nl / 10) + '0');
			_putchar((nl % 10) + '0');
		}
	_putchar('\n');
	}
}
