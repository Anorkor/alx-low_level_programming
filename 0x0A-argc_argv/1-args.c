#include <stdio.h>
#include "main.h"

/**
  *main - entry
  *@argv : the string from the terminal
  *@argc : the number of parameters
  *Return: 0
  */

int main(int argc, char const *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
