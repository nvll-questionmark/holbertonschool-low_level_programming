#include <stdlib.h>
#include "main.h"

/**
 * create_array - function to make an array an initialize it
 *
 * @size: size of array
 * @c: char to initialize the array
 *
 * Return: pointer to the array, NULL if error
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; p[i] == '\0'; ++i)
		p[i] = c;

	return (p);
}
