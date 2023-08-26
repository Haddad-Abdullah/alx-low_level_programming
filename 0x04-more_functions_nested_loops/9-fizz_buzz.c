#include <stdio.h>

/**
 * main - the main of FizzBuzz that prints numbers to 100 but multiplies of 3, 5
 * @n: used as an indicator
 */

void main(int n)
{
	for (n = 1; n <= 100; n++)
	{
		if (n % 15)
			printf("FizzBuzz");
		else if (n % 5)
			printf("Buzz");
		else if (n % 3)
			printf("Fizz");
		else
			printf("%d", n);
		if (n < 100)
			printf(" ");
	}
}
