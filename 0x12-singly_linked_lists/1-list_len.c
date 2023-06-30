#include "lists.h"
/**
 * list_len - This function returns the number of elements in a linked list
 * @h: Pointer to the list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
