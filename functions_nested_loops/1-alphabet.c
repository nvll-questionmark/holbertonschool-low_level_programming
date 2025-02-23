#include "main.h"

/**
 * print_alphabet - for loop that prints the alphabet in lower case
 * new line, of course
 */

void print_alphabet(void)
{
	char alp;

	for (alp = 97; alp <= 122; alp++)
		_putchar(alp);

	_putchar('\n');
}
