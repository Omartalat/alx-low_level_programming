#include "lists.h"
/*
 * print_dlistint - print te content of a dlistint_t list
 * @h: pointer to the head.
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
