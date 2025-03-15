#include <stdlib.h>
#include "main.h"

/**
 * _strdup - funtion to duplicate given string
 * @str: given string
 *
 * Return:point to duplicate if Success, NULL if Error
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *poin;

	if (str == NULL)
		return (NULL);

	while (str[i])
		++i;

	poin = malloc(sizeof(char) * (i + 1));

	if (poin == NULL)
		return (NULL);

	while ((poin[j] = str[j]) != '\0')
		++j;

	return (poin);
}
