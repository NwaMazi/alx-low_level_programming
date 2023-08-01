#include "lists.h"

/**
 * sum_listint - this program calculates the sum of
 * all the data in a listint_t list
 * @head: first node in linked list
 *
 * Return: final summ
 */
int sum_listint(listint_t *head)
{
	int summ = 0;
	listint_t *temp = head;

	while (temp)
	{
		summ += temp->x;
		temp = temp->nxt;
	}

	return (summ);
}
