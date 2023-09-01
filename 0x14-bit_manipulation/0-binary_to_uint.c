#include "main.h"

/**
 * binary_to_uint - this program converts a binary number to unsigned int
 * @b: string being converted
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dec_valu = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dec_valu = 2 * dec_valu + (b[x] - '0');
	}

	return (dec_valu);
}
