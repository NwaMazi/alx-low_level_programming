#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - this program prints each array elem
 * @array: array
 * @size: argument
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
