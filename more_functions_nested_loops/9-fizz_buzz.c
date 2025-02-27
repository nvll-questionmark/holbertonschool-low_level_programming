#include <stdio.h>

/**
 * main - prints # 1-100 & replaces multi of 3 by Fizz and mult of 5 as Buzz
 * Return: Always 0 Success
 */

int main(void)
{
	int l;

	for (l = 1; l <= 100; l++)
	{
		if (l == 1)
		{
			printf("%d", l);
		}
		else if (l % 3 == 0 && l % 5 == 0)
		{
			printf(" Fizzbuzz");
		}
		else if (l % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (l % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", l);
		}
	}
	printf("\n");

	return (0);
}
