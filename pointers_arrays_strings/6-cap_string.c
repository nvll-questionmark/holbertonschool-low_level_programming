#include "main.h"

/**
 * cap_string - capitalize every word
 * @s: given value
 *
 * Return: results
 */

char *cap_string(char *s)
{
	int p;
	int q;

	char sep[13] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (p = 0; s[p] != '\0'; p++)
	{
		if (p == 0 && s[p] >= 97 && s[p] <= 122)
			s[p] -= 32;

		for (q = 0; q < 13; q++)
		{
			if (s[p] == sep[q])
			{
				if (s[p + 1] >= 97 && s[p + 1] <= 122)
				{
					s[p + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
