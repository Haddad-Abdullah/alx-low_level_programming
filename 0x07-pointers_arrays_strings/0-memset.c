#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte.
 * @s: destination
 * @b: src
 * @n: num of bytes
 *
 * Return: pointer to the dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
