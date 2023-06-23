#include <stdlib.h>
#include <stdio.h>

/**
 * main -  This program that prints _putchar, followed by a new line.
 *
 * Return: 0
 */
int main(void)

{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
	putchar(str[i]);
	i++;
	}
	putchar('\n');
	return (0);
}
