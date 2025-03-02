#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: given string
 */

void puts_half(char *str)
{
	int rev = 0;
	int n;
	int i;

	while (str[rev] != '\0')
	{
		rev++;
	}

	if (rev % 2 == 0)
	{
		for (i = rev / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (rev % 2)
	{
		for (n = (rev - 1) / 2; n < rev - 1; n++)
		{
				_putchar(str[n + 1]);
		}
	}
		_putchar('\n');
}
