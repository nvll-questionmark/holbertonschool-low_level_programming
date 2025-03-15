#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function to concat two strings
 * @s1: 1st string
 * @s2: 2nd String
 *
 * Return: Resulting string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int l;
	int j;
	int m;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; ++i)
		;

	for (l = 0; s2[l] != '\0'; ++l)
		;

	p = malloc(sizeof(char) * (i + l + 1));

	if (p == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; ++j)
		p[j] = s1[j];

	for (m = 0; s2[m] != '\0'; ++m, ++j)
		p[j] = s2[m];

	return (p);
}
