#include "main.h"

/**
 *print_alphabet_x10 - prints out the alphabet x10.
 *followed by a new line, of course.
 */

void print_alphabet_x10(void)
{
	char alp;
	int rep = 0;

        while (rep++ < 10)
	{
		for (alp = 97; alp <= 122; alp++)
                _putchar(alp);

        	_putchar('\n');
	}
}
