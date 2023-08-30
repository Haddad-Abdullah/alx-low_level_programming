#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: string is here
 * @c: located char in s
 *
 * Return: character c
 */

char *_strchr(char *s, char c)
{
	char *i = s;

	while (*i != 0 && *i != c)
	{
		i++;
	}
	if (*i != c)
	{
		return (0);
	}
	return (i);
}
