#include "main.h"

/**
 * set_bit - this program sets a bit at a given index to 1
 * @n: pointer to number being changed
 * @index: index of bit being set to 1
 *
 * Return: 1 if ok, else -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
