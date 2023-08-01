#include "lists.h"

/**
 * print_listint - this program prints all
 * the elements of a linked list
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->x);
		numb++;
		h = h->nxt;
	}

	return (numb);
}
