#include "lists.h"

/**
 * pop_listint - this program deletes the head node of a linked list
 * @head: pointer to first element in linked list
 *
 * Return: data inside the elements being deleted,
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->x;
	temp = (*head)->nxt;
	free(*head);
	*head = temp;

	return (numb);
}
