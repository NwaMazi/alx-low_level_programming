#include "lists.h"

/**
 * free_listint_safe - this code frees a linked list
 * @h: pointer to first node in the linked list
 *
 * Return: number of elements freed in list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lngt = 0;
	int dif;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lngt++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lngt++;
			break;
		}
	}

	*h = NULL;

	return (lngt);
}
