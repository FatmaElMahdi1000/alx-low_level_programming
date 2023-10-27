#include "main.h"

/**
 *  _memset - memory is filled with constant type
 *  @s: pointer
 *  @b: constant
 *  @n: the bytes
 *  Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}
	return (s);
}
