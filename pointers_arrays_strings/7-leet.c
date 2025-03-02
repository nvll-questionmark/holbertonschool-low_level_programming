#include "main.h"

/**
 * leet - encodes in 1337
 * @s: encoded value
 *
 * Return: encoded string
 */

char *leet(char *s)
{
        int p;
        int q;

        char *n1 = "aAeEoOtT1L";
        char *n2 = "4433007711";

        for (p = 0; s[p] != '\0'; p++)
        {
                for (q = 0; q < 10; q++)
                {
                        if (s[p] == n1[q])
                        {
                                s[p] = n2[q];
                        }
                }
        }
        return (s);
}
