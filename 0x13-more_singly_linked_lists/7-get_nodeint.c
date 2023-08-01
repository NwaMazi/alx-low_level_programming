#include "lists.h"

/**
 * get_nodeint_at_index - this program returns the node
 * at a certain index in a linked list
 * @head: first node in linked lists
 * @index: index of node to return
 *
 * Return: pointer to node being looked for, or else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;
	listint_t *temp = head;

	while (temp && y < index)
	{
		temp = temp->next;
		y++;
	}

	return (temp ? temp : NULL);
}
