#include <stdlib.h>
#include <stdio.h>

/**
 * main - This program is a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0
 */
void print_alphabet_x10(void);
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
	int n = 0;

	while (n < 10)
	{
	print_alphabet();
 	n++;
	}
	return (0);
}
