#include "main.h"

/**
 * puts_half - prints half of a string, folloesd by a line.
 */

void puts_half(char *str)
{
	int l, n;

	l = 0;

	while (str[l] != '\0')
	{
		l++
	}

	n = l;

	if (n % 2 != 0)
	{
		for (n; n < (n - 1) / 2; n--)
		{
			_putchar (str[n]);
		}
	}
	else
	{
		n = n / 2;
		for (l; l < n; l--)
		{
			_putchar (str[n]);
		}
	}
	_putchar ('\n');
}
