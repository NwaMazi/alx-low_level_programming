#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this program adds a new node at the beginning of a linked list
 * @head: double pointer to list_t list
 * @str: new string
 *
 * Return: address of new element, NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int lent = 0;

	while (str[lent])
		lent++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->lent = lent;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
