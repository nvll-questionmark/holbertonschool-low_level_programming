#include "main.h"

/**
 * _isalpha - verifies for alphabetic characters
 * c: verified character
 *
 * Return: 1 if letter(upper or lower), otherwise return 0
 */

int _isalpha(int c)
{
	if ((c > 65 && c < 90) || (c > 97 && c < 122))
		return (1);
	else
		return (0);
}
