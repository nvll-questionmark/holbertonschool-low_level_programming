#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert string to int
 * @s: string to convert
 *
 * Return: 0
 */

int _atoi(char *s)
{
	int i = 0;
	int d = 0;
	int n = 0;
	int len = 0;
	int f = 0;
	int digit = 0;

	while (s[len] != '\0')
		++len;
	while (i < len && f == 0)
	{
		if (s[i] == 45)
			++d;

		if (s[i] >= 48 && s[i] <= 57)
		{
			digit = s[i] - 48;
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
			f = 0;
		}
		++i;
	}
	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - adds two ints
 * @argc: # of args
 * @argv: array of args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int num;
	int i;
	int j;
	int k;

	for (i = 1; i < argc; ++i)
	{
		for (j = 0; argv[i][j] != '\0'; ++j)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; ++k)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
