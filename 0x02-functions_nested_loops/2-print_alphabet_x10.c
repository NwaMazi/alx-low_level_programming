#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10  - This program prints the alphabet 10 times, in lowercase.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char l;
	int n = 0;

	while (n < 10)
	{
	for (l = 'a'; l <= 'z'; l++)
	{
	putchar(l);
	}
	putchar('\n');
	n++;
	}
}
