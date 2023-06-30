#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - Adds a new node at the end of list
 * @head: The start of a list
 * @str: The string to add at the end
 * Return: address of the added string
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *temp = *head;
	list_t *new;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
