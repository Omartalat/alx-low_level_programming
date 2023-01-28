#include <stdlib.h>
#include "lists.h"
/**
 ** free_list - frees a list_t list.
 ** @head: A pointer to the  list
 ** Return: nothing..
 **/
void free_list(list_t *head)
{
	list_t *p = NULL;

	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
