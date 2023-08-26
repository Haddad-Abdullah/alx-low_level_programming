#include "main.h"

/**
 * print_square - prints a square of #
 * @size: size of the square side
 */

void print_square(int size)
{
	int h, v;

	for (v = 0; v < size; v++)
	{
		for (h = 0; h < size; h++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
