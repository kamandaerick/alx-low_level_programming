#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node at a given index
 * @head: pointer to the head of the list
 * @index: the index at the desired node
 * Return: returns the node or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count += 1;
	}
	return (NULL);
}
