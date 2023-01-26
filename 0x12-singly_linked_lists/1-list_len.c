#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 ** list_len -  returns the number of elements in a linked list_t list.
 ** @h: list_t list
 **
 ** Return: Always returns the number of elements in a linked list_t list.
 **/
size_t list_len(const list_t *h)
{
	if (h)
		return (list_len(h->next) + 1);
	else
		return (0);
}
