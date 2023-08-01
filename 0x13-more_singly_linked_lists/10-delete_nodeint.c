#include "lists.h"

/**
 * delete_nodeint_at_index - this program deletes
 * a node in a linked list at a certain index
 * @head: pointer to first element in the list
 * @index: index node to be delete
 *
 * Return: 1 , or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int y = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->nxt;
		free(temp);
		return (1);
	}

	while (y < index - 1)
	{
		if (!temp || !(temp->nxt))
			return (-1);
		temp = temp->nxt;
		y++;
	}


	current = temp->nxt;
	temp->nxt = current->nxt;
	free(current);

	return (1);
}
