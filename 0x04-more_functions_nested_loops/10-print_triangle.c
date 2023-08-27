#include "main.h"

/**
 * print_triangle - prints a shape of 90 degree triangle
 * @size: Size of the vertical triangle side
 */

void print_triangle(int size)
{
	int rows, spc, i;

	for (rows = 0; rows < size; rows++)
	{
		for (spc = size - 1; spc > 1; spc--)
			_putchar(' ');
		for (i = 0; i < rows; i++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
