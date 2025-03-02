#include "main.h"
#include <stdio.h>

/**
 * _puts - funtion to print a string
 *@str: pointer to the string
 */

void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
	
}
