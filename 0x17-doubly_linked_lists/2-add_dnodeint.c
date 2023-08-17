#include "lists.h"
/**
 * create - a new node
 * @head: the pointer to struct
 * @n: the value of node
 * Return: the new node
 */
dlistint_t *create(dlistint_t *head, const int n)
{
	head = malloc(sizeof(dlistint_t));
	head->prev = NULL;
	head->n = n;
	head->next = NULL;
	return (head);
}

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

	if (!(*head))
	{
		*head = create(*head, n);
		return (*head);
	}
	ptr = create(*head, n);
	if (!ptr)
		return (NULL);
	ptr->prev = NULL;
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
