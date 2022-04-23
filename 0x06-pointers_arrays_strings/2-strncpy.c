#include "main.h"
#include <stdio.h>

/**
 * _strncpy - check the main code
 * @dest : variable
 * @src : variable
 * @n : integer
 * Return: a concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; ++i)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
