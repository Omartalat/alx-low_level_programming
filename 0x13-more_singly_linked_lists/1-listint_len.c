#include "lists.h"
/**
 ** listint_len - returns the number of elements in a linked listint_t list
 ** @h: listint_t list.
 **
 ** Return: Always returns the number of elements in a linked listint_t list
 **/
size_t listint_len(const listint_t *h)
{
	if (h)
		return (listint_len(h->next) + 1);
	return (0);
}
