#include "lists.h"
/**
 * add_dnodeint - adds a node at the begining of a list
 * @head: the head of the list
 * @n: the data to add at the start
 * Return: The address of the new element or NULL if adding fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;
	if (*head != NULL)
		(*head)->prev = tmp;

	*head = tmp;
	return (tmp);
}
