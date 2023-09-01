#include "main.h"

/**
 * flip_bits - this program counts the number of bits to change
 * to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: bits change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, cnts = 0;
	unsigned long int curnt;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		curnt = exclusive >> x;
		if (curnt & 1)
			cnts++;
	}

	return (cnts);
}
