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
	else if (c > 96 && c < 123)
        {       
                c = 0;
        }
	return (c);
}
