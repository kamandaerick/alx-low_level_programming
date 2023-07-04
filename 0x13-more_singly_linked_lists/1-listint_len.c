#include "lists.h"
/**
 * listint_len - Return the number of elements in a list
 * @h: The list's head
 * Return: Numer of elements in that list
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
