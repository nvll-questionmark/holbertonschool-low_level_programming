#include "main.h"

/**
 * _abs - program that computes the absolute value of an integer
 * @n: integer to verify
 * Return: Absolute value of an integer.
 */

int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
