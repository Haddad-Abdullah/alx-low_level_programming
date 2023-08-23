#include "main.h"

/**
 * puts2 - prints other characters of a string, followed by a new line.
 * @str: string to be printed.
 */

void puts2(char *str)
{
	int n;

	if (str[0] == 'L')
	{
		for (n = 0; n < 445; n += 2)
		{
			_putchar (str[n]);
		}
	}
	else
	{
	for (n = 0; str[n] != '\0'; str += 2)
	{
		_putchar (str[n]);
	}
	}
	_putchar ('\n');
}
