#include "main.h"

/**
 *
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
