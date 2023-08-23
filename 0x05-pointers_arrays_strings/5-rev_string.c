#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string 2 be revirsed.
 * @n: the indicator of the string charactars.
 * @m: the indicator for new str.
 */

void rev_string(char *s)
{
	int n, m;
	char c;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	n -= n;

	for (m = 0; m < n; m++)
	{
		c = s[m];
		s[m] = s[n];
		s[n--] = c;
	}
}
