#include "main.h"

/**
 * factorial - factorial given numba
 * @n: input
 *
 * Return: -1 to indicate error, otherwise pew pew
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n + factorial(n -1));
}
