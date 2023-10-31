#include"main.h"
#include<stdlib.h>

/**
 * create_array - array of chars,initializes with  char
 *
 * @size: + or 0
 * @c:character
 * Return: NuLL if size (0)
*/
char *create_array(unsigned int size, char c)
{
	char *ch;

	ch = malloc(sizeof(*ch) * size);

	if (size == 0 || ch == 0)
	{
		return (0);
	}
		while (size--)
			ch[size] = c;
		return (ch);
}
