#include "main.h"

/**
 * _memset - A function to reset chars in memory
 *
 * @s: destenation
 * @b: src
 * @n: number of bytes to be replaced
 * Return: pointer to the dest. @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int = i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
