#include "main.c"
/**
 * _islower - Entry point
 *
 * Description: 'Checking if the char is lowercase or uppercase'
 *
 * Retrn: 0or 1
 */

int _islower(int c)
{
if (c >= 'a' && c<='z')
	return(1);
else
	return(0);
}
