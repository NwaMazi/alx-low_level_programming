#include <stdio.h>
#include "lists.h"

/**
 * print_list - this program prints all the elements of a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->lent, h->str);
		h = h->next;
		x++;
	}

	return (x);
}
