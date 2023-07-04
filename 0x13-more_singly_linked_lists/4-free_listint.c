#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -Free listint list
 * @head: The head of the list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
