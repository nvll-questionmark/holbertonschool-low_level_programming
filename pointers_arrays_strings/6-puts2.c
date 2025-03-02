#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: string given
 */

void puts2(char *str)
{
	int rev = 0;
	int i;
	
	while (str[rev] != '\0')
	{
		rev++
	}

	for (i = 0; i < rev; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
