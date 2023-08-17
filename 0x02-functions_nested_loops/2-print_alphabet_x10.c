#include "main.h"

/**
 * printing_alphabet_x10 
 * Description: 'printin 9 more alphaas'
 * Return: Always 0
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
