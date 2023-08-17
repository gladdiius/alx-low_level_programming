#include "lists.h"
/**
 * get_dnodeint_at_index - get the value at a gived index
 * @head: pointer to the first node in linked list
 * @index: position of the value to be retrived
 * Return: the address of the node or null if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (temp && i != index)
	{
		temp = temp->next;
		i++;
	}

	if (i < index)
		return (NULL);
	return (temp);
}
