#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * Description: a function that checks for alphabetic character.
 *
 * @c : character to check the case
 *
 * Return: Always 0 or 1 (success)
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
