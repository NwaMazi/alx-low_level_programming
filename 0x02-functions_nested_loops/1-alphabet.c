#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - This program a function that prints the alphabet, in lowercase.
 *
 * Return: 0
 */
void print_alphabet(void)

{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
	putchar(l);
	}
	putchar('\n');
}
