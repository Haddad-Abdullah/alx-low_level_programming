#include "main.h"

/**
 * _isupper - checks if the character is uppercase.
 * @c: the ascii of the charachter and returning it
 * Return: always c
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
