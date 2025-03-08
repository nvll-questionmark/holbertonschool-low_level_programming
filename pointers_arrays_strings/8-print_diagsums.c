#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - niggasums a.k.a the sum o a square matrix of integers
 * @a: pointa
 * @size: sizuuuuu
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum = 0;

	for (i = 0; i < size; ++i)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}

