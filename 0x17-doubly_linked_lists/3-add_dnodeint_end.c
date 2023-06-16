#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to a pointer to the head
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t, *current;

	t = malloc(sizeof(dlistint_t));
	if (!t)
		return (NULL);
	t->prev = NULL;
	t->n = n;
	t->next = NULL;
	if (!*head)
	{
		*head = t;
	}
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		t->prev = current;
		current->next = t;
	}
	return (t);
}
