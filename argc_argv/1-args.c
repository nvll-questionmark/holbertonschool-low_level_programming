#include <stdio.h>

/**
 * main - print # of arg passed to prog
 * @argc: #of arg
 * @argv: array of arg
 *
 * Return: Mustard
 */

int main( int argc, char *argv[] __ attribute__((unused)))
{
	printf("%d\n", argc - 1);
	
	return (0);
}
