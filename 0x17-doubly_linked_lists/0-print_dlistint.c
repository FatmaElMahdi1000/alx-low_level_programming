#include "lists.h"
/**
 *print_dlistint - counting the number of a node in a list
 *
 * @h: pointer used to access the list
 *
 * Return: counting
**/
size_t print_dlistint(const dlistint_t *h)
{
	size_t counting = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counting += 1;
	}
	return (counting);

}
