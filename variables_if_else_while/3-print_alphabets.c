#include <stdio.h>

/**
*main - destroy betty 101
*
*Return: Always 0 (Suckcess)
*/
int main(void)
{
	char ay;

	for (ay = 'a'; ay <= 'z'; ay++)
		putchar(ay);

	for (ay = 'A'; ay <= 'Z'; ay++)
		putchar(ay);
	putchar('\n');

	return (0);
}
