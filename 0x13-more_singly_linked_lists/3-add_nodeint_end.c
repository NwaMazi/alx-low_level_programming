#include "lists.h"

/**
 * add_nodeint_end - this program adds a node at the end of a linked list
 * @head: pointer to first element in the list
 * @n: data to be inserted
 *
 * Return: pointer to new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->nxt = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->nxt)
		temp = temp->nxt;

	temp->nxt = new;

	return (new);
}
