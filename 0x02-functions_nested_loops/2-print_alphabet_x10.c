#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: '0x02. C - Functions, nested loops'
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int r, i;

	for (r = 0; r < 10; r++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
