#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 but 2 and 4, followed by a new li * ne.
 */

void print_most_numbers(void)
{
	char i;

	if (i != 2 || i != 4)
	{
		for (i = 48; i < 58;)
		{
			_putchar(i);
			_putchar('\n');
		}
		i++
	}
}
