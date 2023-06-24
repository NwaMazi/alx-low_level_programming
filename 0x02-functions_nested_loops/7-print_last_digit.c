#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n last_digit: used to find the last digit
 * Return: last_digit
 */

int print_last_digit(int n)
{
	int d;

	if (n < 0)
		n = -n;
	d = n % 10;

	if (d < 0)
		d = -d;
	_putchar(d + 0);
	return (d);
}
