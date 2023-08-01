#include "lists.h"

/**
 * free_listint2 - this program frees a linked list
 * @head: pointer to listint_t list being freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->nxt;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
