#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Add a node at the end of a list
 * @head: The head of the list
 * @n: The node to add
 * Return: NULL if it fails or address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current = *head;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (new);

}
