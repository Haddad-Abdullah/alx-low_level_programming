#include "main.h"

/**
 * jack_bauer - prints time table in this format: HH:MM
 * Return: 0
 */

void jack_bauer(void)
{
	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
	return (0);
}
