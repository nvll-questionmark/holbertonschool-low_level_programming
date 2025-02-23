#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: int to be verified
 * Return: 1 and prints '+' if 'n' is > than 0
 * 0 and prints '0' if 'n' is 0
 * -1 and prints '-' if 'n' is < 0
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(43);
		return (1);
	}
}
