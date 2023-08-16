#include <stdio.h>

/**
 * main - Prints the lower and uppercases alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char f;

	for (f = 'a'; f <= 'z'; f++)
	{
		putchar(f);
	}

	for (f = 'A'; f <= 'Z'; f++)
	{
		putchar(f);
	}

	putchar('\n');

	return (0);
}
