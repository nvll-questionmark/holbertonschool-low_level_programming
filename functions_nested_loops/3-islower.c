#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: verified character
 *
 * Return: 1 if c is lowercase else 0 if otherwise.
 */

int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
