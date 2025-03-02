#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: variable given
 *
 * Return: reverse string
 */

void print_rev(char *s)
{
	int i = 0;
	int j;
	int rev;

	while (s[i] != '\0')
	{
		i++;
	}

	rev = i;

	for (j = rev - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
