#include "lists.h"
/**
 * dlistint_len - find the number of elements in a linked list
 * @h: the list
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
