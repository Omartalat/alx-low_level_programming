#include "lists.h"
/**
 ** print_listint - prints all the elements of a list.
 **
 ** @h: listint_t list
 **
 ** Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h)
	{
		printf("%d\n", h->n);
		return (print_listint(h->next) + 1);
	}
	return 0;
}
