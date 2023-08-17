#include "lists.h"
/**
 * print_dlistint - prints elements in dlistint
 * @h: pointer to struct dlistint_t
 * Return: length of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
