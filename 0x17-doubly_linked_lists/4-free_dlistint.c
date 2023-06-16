#include "lists.h"
/**
 * free_dlistint - Free the memory
 * @head: Pointer to head
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	t = malloc(sizeof(dlistint_t));
	if (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
