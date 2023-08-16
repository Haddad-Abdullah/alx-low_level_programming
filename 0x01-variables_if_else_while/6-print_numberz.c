#include <stdio.h>
/**
 * main - Prints basic numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f;

	for (f = '0'; f <= '9'; f++)
	{
		putchar(f);
	}

	putchar('\n');

	return (0);
}
