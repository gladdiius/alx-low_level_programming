#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: Pointer to the last node of the list
 * @n: the value to be insert at the beginning
 * Return: the new pointer to the last node
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head, *ptr;

	if (!last)
	{
		*head = malloc(sizeof(dlistint_t));
		if (!last)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return (*head);
	}

	while (last->next)
		last = last->next;

	ptr = malloc(sizeof(dlistint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = last;
	last->next = ptr;

	return (ptr);
}
