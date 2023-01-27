#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 ** add_node - adds a new node at the beginning of a list_t list.
 **
 ** @head: pointer to head of list
 ** @str: string to be in the added node
 **
 ** Return:  the address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	int len;
	char *s;

	n = malloc(sizeof(list_t));
	if (!head)
		return (NULL);
	s = strdup(str);
	for (len = 0; s[len];)
		len++;
	n->str = s;
	n->len = len;
	n->next = *head;
	*head = n;
	return (n);
}
