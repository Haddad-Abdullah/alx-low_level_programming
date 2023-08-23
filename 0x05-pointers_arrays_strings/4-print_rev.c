#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string 2 be printed.
 */

void print_rev(char *s)
{
	int n;
	int m;
	int end;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	end = n;

	for (m = end - 1; m >= 0; m--)
	{
		_putchar (s[m]);
	}
	_putchar ('\n');
}
