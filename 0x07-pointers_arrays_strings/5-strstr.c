#include "main.h"
#include <string.h>

/**
  * _strstr - function
  * @haystack : variable
  * @needle : variable
  * Return: 0
  */

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *Begin = haystack;
char *pattern = needle;


while (*haystack && *pattern && *haystack == *pattern)
{
haystack++;
pattern++;
}

if (!*pattern)
{
return (Begin);
}
haystack = Begin + 1;
}
return (0);

}
