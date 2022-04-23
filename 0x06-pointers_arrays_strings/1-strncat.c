#include "main.h"
#include <stdio.h>

/**
 * _strncat - checks the main code
 * @dest : variable
 * @src : variable
 * @n : the integer
 * Return: a concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int i, a;
for (i = 0; dest[i] != '\0'; i++)
{
continue;
}
for (a = 0; a < n && src[a] != '\0'; a++)
{
dest[i] += src[a];
i++;
}
dest[i] += '\0';
return (dest);
}
