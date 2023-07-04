#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Add a new node at the begining
 * @head: The list's head
 * @n: The lement to add
 * Return: Address of the added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
