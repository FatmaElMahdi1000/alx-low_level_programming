#include "lists.h"
/**
 *add_dnodeint - for adding node at the beg.
 *
 * @head: head of the linked list
 *
 * @n: data of the node
 *
 * Return: Head
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t);

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	temp->next = *head;

	if (*head != NULL)
	{
	(*head)->prev = temp;

	}
	*head = temp;
	return (*head);
}
