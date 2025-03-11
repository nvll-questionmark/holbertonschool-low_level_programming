#include "main.h"

/**
 * primehelp - helper function to recursively check if n is prime
 * @n: int to check
 * @i: divisor to check
 *
 * Return: 1 if n is prie 0 if not
 */

int primehelp(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (primehelp(n, i + 1));
}

/**
 * is_prime_number - function that return 1 if int is prime
 * @n: int
 *
 * Return: waffles & steak
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primehelp(n, 1));
}
