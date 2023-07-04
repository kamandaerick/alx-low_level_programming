#include "lists.h"
/**
 * sum_listint - Sums all the data os a singly linked list
 * @head: The head of the list
 * Return: Returns the sum or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
