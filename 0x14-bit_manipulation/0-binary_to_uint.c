#include "main.h"

/**
 * binary_to_uint - function
 * atoi - conversion
 * @b: int
 *Return: 0 or int
*/

int atoi(const char *b);
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	while (*b)
{
		if (*b != '0' && *b != '1')
			return (0);

		num = atoi(b);
}
	return (num);

}
