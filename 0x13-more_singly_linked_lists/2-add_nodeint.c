#include "lists.h"
/**
 ** add_nodeint - adds a new node at the beginning of a listint_t list
 ** @head: A pointer to head of the list
 ** @n: integer to store in a node
 **
 ** Return: Always 0.
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (head)
	{
		p->next = *head;
		p->n = n;
		*head = p;
		return (p);
	}
	return (NULL);
}
