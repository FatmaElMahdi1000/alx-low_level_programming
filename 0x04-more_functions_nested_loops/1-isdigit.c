#include <main.h>
/**
 * _isdigit - checks for digits between 0 and 9
 *
 * @c : is a digit
 *
 * Return 1 if a digit 0 if not.
*/
int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
