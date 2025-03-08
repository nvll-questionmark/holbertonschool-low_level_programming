#include "main.h"

/**
 * _strstr - funtion that locates substring
 * @haystack: pointa
 * @needle: pointa
 *
 * Return: a ointer to the beginning of the location substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int l;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; ++i)
	{
		for (l = 0; needle[l] != '\0'; ++l)
		{
			if (haystack[i + l] != needle[l])
				break;
		}
		if (needle[l] == '\0')
			return (haystack + i);
	}
	return (0);
}
