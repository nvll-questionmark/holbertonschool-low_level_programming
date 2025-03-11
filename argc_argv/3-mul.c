#include <stdio.h>

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
 * main - mult 2 #
 * @argc: ketchup
 * @argv: mustard
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

