#include "main.h"

/**
 * main - the main of FizzBuzz that prints numbers to 100 but multiplies of 3, 5
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%d", n);
		if (n < 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
