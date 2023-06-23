#include <stdlib.h>
#include <stdio.h>

/**
 * main -  This program a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0
 */
void print_alphabet(void);
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
	putchar(l);
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
