#include "main.h"

/**
 * _memset - function
 * @s : the address of the memory we want to fill
 * @b : the caracter to fill the memory
 * @n : the number of times to fill the memory
 * Return: memory.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
