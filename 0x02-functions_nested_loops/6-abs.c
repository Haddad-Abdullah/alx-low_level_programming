#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: getting the positive value of any num.
 *
 * @n : is the given num
 *
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
		n = (n *(-1));
	return (n);
}
