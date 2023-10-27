#include "main.h"
/**
 *_memcpy - copy data from 1 mem. address to another
 * @src: source
 * @dest: destination
 * @n: number
 * Return: a pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
