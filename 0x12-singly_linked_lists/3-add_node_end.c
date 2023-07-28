#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - this program adds a new node at the end of a linked list
 * @head: double pointer to list_t list
 * @str: string to put in new node
 *
 * Return: address of new element, NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int lent = 0;

	while (str[lent])
		lent++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->lent = lent;
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
