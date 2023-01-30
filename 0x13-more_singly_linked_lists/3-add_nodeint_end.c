#include "lists.h"
/**
 ** add_nodeint_end - adds a new node at the end of a listint_t list
 ** @head: A pointer to head of the list
 ** @n: integer to store in a node
 **
 ** Return: node.
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *tail;

	p = malloc(sizeof(listint_t));
	if (!p)
		return (NULL);
	p->n = n;
	if (*head == NULL)
		*head = p;
	tail = *head;
	while (tail->next)
		tail = tail->next;
	p->next = tail->next;
	tail->next = p;
	return (*head);
}
