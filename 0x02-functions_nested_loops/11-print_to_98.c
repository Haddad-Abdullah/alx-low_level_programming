#include "main.c"

/*
 * print any number till 98
 *
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ")
			}
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
		for (n; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ")
			}
		}
	printf("\n");
}
