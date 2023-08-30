#include "main.h"

/**
 * _memcpy - function that copies from src to dest
 * @dest: destination for copiing
 * @src: source to copy from
 * @n: num
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
