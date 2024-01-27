#include"lists.h"

/**
 * add_dnodeint_end - add node to the end
 *
 * @n: data of the nodes
 *
 * @head: head of the linked list
 *
 * Return: final head after adding new node
**/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp3 = malloc(sizeof(dlistint_t));
	dlistint_t *tp;

	if (*head == NULL || temp3 == NULL)
	{
		return (NULL);
	}
	temp3->prev = NULL;
	temp3->n = n;
	temp3->next = NULL;


	tp = *head;

	while (tp->next != NULL)
	{
		tp = tp->next;
	}
	tp->next = temp3;
	temp3->prev = tp;
	return (*head);

}
