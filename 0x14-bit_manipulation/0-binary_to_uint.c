#include "main.h"

/**
 * binary_to_uint - function
 * @b: int
 *Return: 0 or 1
 *
*/
unsigned int binary_to_uint(const char *b)
{
	int num; 
	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = num * 2 + (*b++ - '0');
	}
	return (num);
}
