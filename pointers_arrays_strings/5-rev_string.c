#inlcude "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string given
 */

void rev_string(char *s)
{
	char str;
	int i1 = 0;
	int i2 = 0;
	int i3;

	while (s[i1] != 0)
	{
		i1++;
	}

	i2 = i1 - 1;

	for (i3 = 0; i3 < i1  2; i3++)
	{
		str = s[i3];
		s[i3] = s[i2];
		s[i2--] = str;
	}
}
