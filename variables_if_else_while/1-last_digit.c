#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - betty is gay
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int f_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	f_digit = n % 10;
	if (f_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, f_digit);
	else if (f_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, f_digit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, f_digit);
	return (0);
}
