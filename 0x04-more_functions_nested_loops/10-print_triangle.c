#include "main.h"

/**
 * print_triangle - prints a shape of 90 degree triangle
 * @size: Size of the vertical triangle side
 */

void print_triangle(int size)
{
	int rows, spc, i;

	for (rows = 1; rows <= size; rows++)
	{
		for (spc = size - rows; spc >= 1; spc--)
			_putchar(' ');
		for (i = 1; i <= rows; i++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
