#include "lists.h"
/**
 * dlistint_len - prints elements in dlistint
 * @h: pointer to struct dlistint_t
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i = 0;

	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
