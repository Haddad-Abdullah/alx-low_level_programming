#include "main.h"

/**
 * puts2 - prints other characters of a string, starting with the first character, followed by a new line.
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n += 2)
	{
		_putchar (str[n]);
	}
	_putchar ('\n');
}
