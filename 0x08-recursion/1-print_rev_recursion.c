#include "main.h"

/**
 * _print_rev_recursion - prints a reversed string
 * @s: string characters to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
