#include "main.h"

/**
 * get_bit - this program returns the value of
 * a bit at an index in a decimal number
 * @n: number being searched for
 * @index: index of the bit
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_valu;

	if (index > 63)
		return (-1);

	bit_valu = (n >> index) & 1;

	return (bit_valu);
}
