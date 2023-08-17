#include "main.h"

/**
 *printing alphabet 10 times
 *
 *Return: Always 0
 */

void print_alphabet_x10(void)
{
	int r, i;

	for (r = 0; r < 11; r++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar("/n");
	}
}
