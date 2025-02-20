#include <stdio.h>

/**
*main - Entry Point, prints the alphabet in reverse.
*
*Return: Same as last time 0, Success.
*/

int main(void)
{
	char task7;

	for (task7 = 122; task7 >= 97; task7--)
		putchar(task7);

	putchar('\n');
	return (0);
}
