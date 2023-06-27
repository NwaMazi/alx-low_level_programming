#include "main.h"
/**
 * swap_int - this program swaps the values of two integers
 * @a: swaps
 * @b: swaps
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
