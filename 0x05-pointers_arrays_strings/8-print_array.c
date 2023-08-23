#include "main.h"

/**
 * print_array - prints number of elements of array of integers, followed by a new line.
 * @a: array to be printed.
 * @n: num of elements.
 * @i: variable to get the values of array members.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf (", %d", a[i]);
		else
			printf ("%d", a[i]);
	}
	printf ("\n");
}
