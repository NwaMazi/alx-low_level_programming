#include "main.h"

/**
 * clear_bit - this program sets the value of a given bit to 0
 * @n: pointer to number being changed
 * @index: index of bit to clear
 *
 * Return: 1 if ok, else -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
