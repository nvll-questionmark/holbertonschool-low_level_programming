#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural #'s from <n> ... 98
 * @n: base #
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
		printf("%d, ", n++);
		printf("%d\n", n);
	}
}
