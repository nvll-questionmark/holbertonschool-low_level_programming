#include <stdio.h>

/**
*main - Entry Point, prints the alphabet in reverse.
*
*Return: Same as last time 0, Success.
*/

int main(void)
{
	int base16;
	char task8;

	for (base16 = 48; base16 <= 57; base16++)
		putchar(base16);

	for (task8 = 97; task8 <= 102; task8++)
		putchar(task8);

	putchar('\n');
	return (0);
}
