#include "lists.h"

/**
 * insert_nodeint_at_index - this program inserts
 * a new node in a linked list,
 * at a given position
 * @head: pointer to first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->nxt = NULL;

	if (idx == 0)
	{
		new->nxt = *head;
		*head = new;
		return (new);
	}

	for (y = 0; temp && y < idx; y++)
	{
		if (y == idx - 1)
		{
			new->nxt = temp->nxt;
			temp->nxt = new;
			return (new);
		}
		else
			temp = temp->nxt;
	}

	return (NULL);
}
