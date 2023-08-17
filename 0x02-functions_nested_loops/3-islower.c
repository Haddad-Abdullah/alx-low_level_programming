#include "main.c"
/**
 * Checking if the char is lowercase or uppercase
 *
 * Retrns 0
 */
int main(void)
{
	int _islower(int c)
	{

	if (c >= 'a' && c<='z')
		return(1);
	else
		return(0);
	}
}
