#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always(Success/correct)
 */
int main(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet ++)
	{
		if (alphabet == 'q')
			continue;
		
		else if (alphabet == 'e')
			continue;

		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
