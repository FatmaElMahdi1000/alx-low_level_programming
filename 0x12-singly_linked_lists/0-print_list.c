#include "lists.h"

/**
 *_strlen - traverse string
 *@s: string
 *Return: 0 if nothing
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);

}

/**
 *print_list - print
 *@h: pointer
 *Return: number of nodes. str is null 0
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);

}
