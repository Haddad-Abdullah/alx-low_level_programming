#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: Number of line rows
 */

void print_diagonal(int n)
{
	int rows;
	int spc;

	for (rows = 0; rows < n; rows++)
	{
		for (spc = 0; spc < rows; spc++)
		{
			_putchar(' ');
		}
		_putchar('\');
	}
	_putchar('\n');
}
