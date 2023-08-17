#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at a specified index
 * @h: a pointer to the head of the list
 * @idx: the index at which to add a value
 * @n: the value to add at node
 * Return: the address of the new node or NULL if adding fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new_node;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node->prev = current;
			new_node->next = current->next;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
