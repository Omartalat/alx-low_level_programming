#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 ** print_list - prints all the elements of a list_t list.
 ** @h pointer to linked list head
 **
 ** Return: Always the number of nodes
 **/
size_t print_list(const list_t *h)
{
	int i = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nill)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
