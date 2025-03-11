#include <stdio.h>

/**
 * main - print all args recieved
 * @argc: # of arg
 * @argv: array of arg
 *
 * Return: White mustard
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
