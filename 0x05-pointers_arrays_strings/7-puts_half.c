#include "main.h"

/**
 * puts_half - prints half of a string, folloesd by a line.
 */

void puts_half(char *str)
{
	int l, *n, k;

	l = 0;
	k = (*n % 2);

	while (str[l] != '\0')
	{
		l++;
	}
	if (k == 0)
	{
		*n = *n / 2;
                for (; l < *n; l--)
                {
                        _putchar (str[*n]);
                }
	}
	else
	{
		for (*n = l; *n < (*n - 1) / 2; n--)
                {
                        _putchar (str[*n]);
                }
	}
	_putchar ('\n');
}
