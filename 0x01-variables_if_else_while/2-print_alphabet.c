#include <stdio.h>

/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
	char f;

	for (f = 'a'; f <= 'z'; f++)
	{
		putchar(f);
	}
	putchar('\n');

	return (0);
}
