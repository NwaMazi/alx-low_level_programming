#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - this is the entry point
 * @a: input
 * @size: input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int x;
	int sum0 = 0;
	int sum1 = 0;

	for (x = 0; x < size; x++)
	{
		sum0 = sum0 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		sum1 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", sum0, sum1);
}
