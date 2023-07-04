#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Delete the head node of a list
 * @head: The head of that list
 * Return: The headnode data or 0 is head is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = (*head);
	int returnValue;

	if (*head == NULL)
		return (0);
	(returnValue) = (*head)->n;
	(*head) = (*head)->next;
	free(tmp);
	return (returnValue);
}
