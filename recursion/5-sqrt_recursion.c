#include "main.h"

int a_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns sqr root
 * @n: numba to calc sqr
 *
 * Return: sqr result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * a_sqrt_recursion - recurses to find root
 * @n: numba to
 * @i: itera
 *
 * Return: Hell
 */

int a_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (a_sqrt_recursion(n, i + 1));
}
