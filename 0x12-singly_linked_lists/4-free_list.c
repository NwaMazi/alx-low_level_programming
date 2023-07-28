#include <stdlib.h>
#include "lists.h"

/**
 * free_list - this program frees a linked list
 * @head: list_t list being freed
 */
void free_list(list_t *head)
{
	list_t *tem;

	while (head)
	{
		tem = head->next;
		free(head->str);
		free(head);
		head = tem;
	}
}
