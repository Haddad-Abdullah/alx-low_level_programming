#include "main.h"

/**
 * print_array - prints number of elements of array of integers, new line.
 * @a: array to be printed.
 * @n: num of elements. 
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf(", %d", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
