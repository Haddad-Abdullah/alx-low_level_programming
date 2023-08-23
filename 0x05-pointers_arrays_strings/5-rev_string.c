#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string 2 be revirsed.
 * @n: the indicator of the string charactars.
 * @m: the indicator for new str.
 * @rev: the new string.
 */

void rev_string(char *s)
{
	int n, m;
	char rev;

	n = 0;
	m = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	while (n > 0)
	{
		rev[m] = s[n];
		m++;
		n--;
	}
}
