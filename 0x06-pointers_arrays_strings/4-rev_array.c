#include "main.h"
/**
 * reverse_array - this program reverse the array of integers
 * @a: array
 * @n: number elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		t = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
