#include "main.h"

/**
 * _isupper - verifies for uppercase characters
 * @c: verified character
 * Return: 1 if c is upppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
