#include <stdio.h>

/**
 * main - Prints base_16
 *
 * Return: Always (Success)
 */
int main(void)
{
	char f;

	for (f = '0'; f <= '9'; f++)
	{
		putchar(f);
	}

	for (f = 'a'; f <= 'f'; f++)
	{
		putchar(f);
	}

	putchar('\n');

	return (0);
}
