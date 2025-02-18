#include <stdio.h>
/**
*main - destroy the entry point
*
*Return: Always 0 (Success)
*/

int mian(void)
{
	char ay;

	for (ay = 'a'; ay <= 'z'; ay++)
		{
		if ( ay != 'q' && ay != 'e')
			putchar(ay);
		}
	putchar('\n');
	return (0);
}
