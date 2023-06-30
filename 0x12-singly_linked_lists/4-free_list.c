#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Deallocates linked list
 * @head: start address of the list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
