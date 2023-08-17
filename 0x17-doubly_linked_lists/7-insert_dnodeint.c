#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts an node at a given position.
 * @h: pointer to pointer of head
 * @idx: position of node to be inserted
 * @n: value to be instered
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	unsigned int i = 1;

	while (temp && idx != i)
	{
		temp = temp->next;
		i++;
	}

	new = malloc(sizeof(dlistint_t));

	if (!new || idx > i)
		return (NULL);
	new->prev = temp;
	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
