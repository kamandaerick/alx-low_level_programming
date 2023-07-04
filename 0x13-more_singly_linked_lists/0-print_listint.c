#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - Prints all the elements of listint_t
 * @h: The head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
