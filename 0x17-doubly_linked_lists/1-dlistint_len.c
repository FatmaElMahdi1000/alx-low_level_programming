#include"lists.h"

/**
 * dlistint_len - counting number of nodes in a linked list
 *
 *@h: number of nodes
 *
 *Return: number of elements
 *
**/

size_t dlistint_len(const dlistint_t *h)
{
	size_t counting = 0;

	while (h)
	{
		h = h->next;
		counting += 1;
	}
	return (counting);
}
