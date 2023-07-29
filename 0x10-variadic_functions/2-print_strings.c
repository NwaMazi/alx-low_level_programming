#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - this program prints strings, followed by a new line.
 * @separator: string to be printed between strings.
 * @n: number of strings passed to function.
 * @...: variable number of strings being printed.
 *
 * Description: when separator is NULL, does not printed.
 *              when one of the strings if NULL, (nil) is printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int indx;

	va_start(strings, n);

	for (indx = 0; indx < n; indx++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
