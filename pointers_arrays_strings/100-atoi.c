#include "main.h"

/**
 * _atoi - converts a string to a integer
 * @s: given string
 *
 * Return: int converted from string
 */

int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int rev = 0;
	int f = 0;
	int digit = 0;

	while (s[rev] != '\0')
		rev++;

	while (a < rev && f == 0)
	{
		if (s[a] == 45)
			++b;

		if (s[a] >= 48 && s[a] <= 57)
		{
			digit = s[a] - 48;
			if (b % 2)
				digit = digit;
			c = c * 10 + digit;
			f = 1;
			if (s[a + 1] < 48 || s[a + 1] > 57)
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);

	return (c);
}
