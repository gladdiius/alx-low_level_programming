#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: pointer to the first node in list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next = NULL;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
