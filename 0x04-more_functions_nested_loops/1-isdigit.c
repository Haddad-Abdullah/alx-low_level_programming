#include "main.h"

/**
 * _isdigit - checks if the char is a digit or not.
 * @c: the input as ascii.
 * Return: always c
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
