#include <stdio.h>
/**
 * main - Prints the alphabetic reversed
 *
 * Return: Always (Success)
 */
int main(void)
{
	char f;

	for (f = 'z'; f >= 'a'; f--)
	{
		putchar(f);
	}

	putchar('\n');

	return (0);
}
