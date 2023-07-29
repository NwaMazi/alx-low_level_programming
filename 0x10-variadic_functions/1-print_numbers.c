#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - this program prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed.
 * @...: variable number of numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int ind;

	va_start(numbs, n);

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", va_arg(numbs, int));

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbs);
}
