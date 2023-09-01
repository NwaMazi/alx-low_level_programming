#include "main.h"

/**
 * print_binary - this program prints the
 * binary equivalent of a decimal number
 * @n: number being printed in binary
 */
void print_binary(unsigned long int n)
{
	int x, cnts = 0;
	unsigned long int curnt;

	for (x = 63; x >= 0; x--)
	{
		curnt = n >> x;

		if (curnt & 1)
		{
			_putchar('1');
			cnts++;
		}
		else if (cnts)
			_putchar('0');
	}
	if (!cnts)
		_putchar('0');
}
