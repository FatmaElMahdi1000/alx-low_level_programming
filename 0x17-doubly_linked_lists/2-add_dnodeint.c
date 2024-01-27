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
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	if (temp == || *head == NULL)
	{
		return (NULL);
	}
	else
	{
		temp->next = *head;
		*head->prev = temp;
		head = temp;
	}
	return (*head);
	}
}
