#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: evaluate
 * Return: Length of string
 */

int _strlen(char *s)
{
	int Rl = 0;

	while (s[Rl] != '\0')
	{
		Rl++;
	}
	return (Rl);
}

