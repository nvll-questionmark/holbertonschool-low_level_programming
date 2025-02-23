#include "main.h"

/**
 * jack_bauer - program that prints every minute of the day
 */

void jack_bauer(void)
{
	int right;
	int left;

	for (left = 0; left <= 23; left++)
	{
		for (right = 0; right <= 59; right++)
		{
			_putchar((left / 10) + '0');
			_putchar((left % 10) + '0');
			_putchar(':');
			_putchar((right / 10) + '0');
			_putchar((right % 10) + '0');
			_putchar('\n');
		}
	}
}
