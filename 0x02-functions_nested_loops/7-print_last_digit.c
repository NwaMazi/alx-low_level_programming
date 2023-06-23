#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n last_digit: used to find the last digit
 * Return: last_digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
	}

	last_digit = n % 10;
	_putchar(last_digit + 0);
	return (last_digit);
}
