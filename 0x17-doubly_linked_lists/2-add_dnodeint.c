#include "lists.h"
/**
 * add_dnodeint - add a node at the beginning of a list
 * @head: Pointer to the first node on list
 * @n: the value to be insert at the beginning
 * Return: the new pointer to the first node
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (!ptr)
		return (NULL);
	if (!(*head))
	{
		ptr->prev = NULL;
		ptr->n = n;
		ptr->next = NULL;
		*head = ptr;
		return (ptr);
	}
	ptr->prev = NULL;
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
