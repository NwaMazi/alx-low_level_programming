#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10  - program prints lowercase alphabet 10 times.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char n, l;

	for (n = 0; n <= 9; n++)
	{
	for (l = 'a'; l <= 'z'; l++)
	{
	_putchar(l);
	}
	_putchar('\n');
	}
}
