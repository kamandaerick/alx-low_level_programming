#include "lists.h"
/**
 * free_dlistint - frees the memory occupied by a list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *link;

	while (current != NULL)
	{
		link = current->next;
		free(current);
		current = link;
	}
}
