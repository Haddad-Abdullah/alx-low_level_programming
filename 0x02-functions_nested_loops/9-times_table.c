#include "main.c"

/*
 * what th is time tables?!!
 *
 *
 */

int main(void)
{
	void times_table(void)
	{
		int r;
		int c;
		int v = (r * c);
		for (r = 0; r <= 10; r++)
		{
			for (c = 0; c <= 10; c++)
			{
				_putchar(v + ",\n");
			}
		}
	}
	return (0);
}
