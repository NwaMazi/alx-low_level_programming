#include "lists.h"

/**
 * listint_len - this program returns
 * the number of elements in a linked lists
 * @h: type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->nxt;
	}

	return (numb);
}
