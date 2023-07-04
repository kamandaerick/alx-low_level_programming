#include "lists.h"
/**
 * get_nodeint_at_index - Get the nth node in a linked list
 * @head: The head of the list
 * @index: The index whose node to get
 * Return: A pointer to the node or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current != NULL)
		return (current);
	else
		return (NULL);
}
