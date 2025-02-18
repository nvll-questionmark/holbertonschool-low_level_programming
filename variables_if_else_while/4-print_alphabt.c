#include <stdio.h>
/**
*main - the entry point,  like wth
*
*Return: Always 0 (Success)
*/

int main(void)
{
	char ay;

	for (ay = 'a'; ay <= 'z'; ay++)
		{
		if (ay != 'q' && ay != 'e')
			putchar(ay);
		}
	putchar('\n');
	return (0);
}
