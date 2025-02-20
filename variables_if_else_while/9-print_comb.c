#include <stdio.h>

/**
* main - FUCK BETTY
*
*Return: 0 Always (Success)
*/

int main(void)
{
	int base;

	for (base = 48; base <= 57; base++)
	{
		putchar(base);
		if (base < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
