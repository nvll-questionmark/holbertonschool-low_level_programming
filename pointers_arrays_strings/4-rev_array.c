#include "main.h"

/**
 * reverse_array - prints arrays in reverse
 * @a: pointa
 * @n: given value
 */

void reverse_array(int *a, int n)
{
	int p;
	int d;

	for (p = 0; p < n; p++)
	{
		d = a[p];
		a[p] = a[n];
		a[n] = d;
	}
}
