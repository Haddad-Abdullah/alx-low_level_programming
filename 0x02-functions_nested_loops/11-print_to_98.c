#include "main.h"

/*
 * print_to_98 - Entry point
 *
 * Description: print any number till 98
 *
 * Return: 98 (ig)
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			n++;
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
		while (n > 98)
		{
			printf("%d", n);
			n--;
			if (n != 98)
			{
				printf(", ");
			}
		}
	printf("\n");
}
