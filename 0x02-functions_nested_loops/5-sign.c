#include "main.c"
/*
 * print_sign - Entry point
 *
 * Description: 'sign check'
 *
 * Return: n
 */

int print_sign(int n)
{
	if (n > 0)
		_putchar ("+\n");
		return (1);
	else if (n = 0)
		_putchar ("0\n");
		return (0);
	else if (n < 0)
		_putchar ("-\n");
		return (-1);
}
