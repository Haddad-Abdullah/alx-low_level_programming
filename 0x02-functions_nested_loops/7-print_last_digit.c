#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: int input
 *
 * Description: prints the last digit of a number
 *
 * Return: last digit of number n
 *
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		i = -1 * (n % 10);
	}
	else
	{
		i = n % 10;
	}
	_putchar((i % 10) + '0');
	return (i % 10);
}
