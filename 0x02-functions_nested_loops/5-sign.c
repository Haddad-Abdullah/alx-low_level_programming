#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * Description: a function that prints the sign of a number.
 *
 * @n : number to check
 *
 * Return: Always 0 or 1 (success)
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	return (n);
}
