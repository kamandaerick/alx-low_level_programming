#include "lists.h"
/**
 * int sum_dlistint - sums the data of a list
 * @head: a pointer to the head of the list
 * Return: returns the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
