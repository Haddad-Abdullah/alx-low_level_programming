#include "main.h"

/**
 * print_to_98 - print to 98
 *
 * Description: function that prints all natural numbers from n to 98,
 *
 * @n : number to start from
 *
 * Return: Always 0 or 1 (success)
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
			if (n != 99)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
		while (n > 98)
		{
			printf("%d", n);
			n--;
			if (n != 97)
			{
				printf(", ");
			}
		}
	printf("98");
	printf("\n");
}
