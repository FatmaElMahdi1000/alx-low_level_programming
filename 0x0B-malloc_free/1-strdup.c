#include "main.h"
#include<stdlib.h>
/**
 * _strdup - a pointer to a newly allocated space
 *
 * @str: string
 *
 * Return: NULL
*/
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	*m = malloc(sizeof(*str) + 1 * size);

		if (m == 0)
			return (NULL);
		else
		{
			for (; i < size; i++)
				m[i] = str[i];
		}
	return (m);
}
