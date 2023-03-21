#include "main.h"
/**
 * _islower - This function checks for lowercase characters
 *
 * @c:  Thisis the _islower function paramter to be checked
 *
 * Return:  Returns 1 for lowercase and 0 for UPRERCASE
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
