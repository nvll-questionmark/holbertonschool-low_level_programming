#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: given value
 *
 * Return: modified string
 */

char *string_toupper(char *s)
{
	int t;

	for (t = 0; s[t] != '\0'; t++)
	{
		if (s[t] >= 97 && s[t] <= 122)
			s[t] = s[t] - 32;
	}

	return (s);
}
