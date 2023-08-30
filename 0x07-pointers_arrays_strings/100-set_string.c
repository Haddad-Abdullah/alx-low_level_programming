#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: char pointed to by the pointer
 * @to: putting the value into it
 *
 * Return: none
 */
void set_string(char **s, char *to)
{
	*s = to;
}
