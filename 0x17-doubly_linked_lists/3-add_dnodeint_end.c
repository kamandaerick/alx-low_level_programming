#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of a list
 * @head: the head of the list
 * @n: the element to add
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *current = *head;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
		return (tmp);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = tmp;
	tmp->prev = current;

	return (tmp);
}
