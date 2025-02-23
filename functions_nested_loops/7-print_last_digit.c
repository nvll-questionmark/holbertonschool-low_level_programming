#include "main.h"

/**
*print_last_digit - function that prints the last digit of a #
*@n: variable to be verified
*Return: final digit of variable
*/

int print_last_digit(int n)
{
	int final = n % 10;

	if (final < 0)
	{
		final *= -1;
	}
	_putchar(final + '0');

	return (final);
}
