#include "lists.h"
/**
 *add_nodeint_end - function
 *@n: argument
 * @head: first node
 * Return: null//number
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
