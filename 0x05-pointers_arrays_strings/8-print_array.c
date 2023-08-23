#include "main.h"

/**
 * print_array - prints number of elements of array of integers, followed by a new line
 * @a: array to be printed.
 * @i: variable to get the values of array members.
 * @n: num of elements.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf ("%d, ", a[i]);
	}
	printf ("%d\n", a[n]);
}