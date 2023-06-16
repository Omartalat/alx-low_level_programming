#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to a head.
 * @n: integer.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *t;

	t = malloc(sizeof(dlistint_t));
	if (!t)
		return (NULL);
	t->n = n;
	t->prev = NULL;
	if (*head)
	{
		t->next = *head;
		(*head)->prev = t;
		*head = t;
	}
	else
	{
		t->next = NULL;
		*head = t;
	}
	return (t);
}
