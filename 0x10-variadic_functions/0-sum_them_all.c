#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this program returns the sum of all its paramters.
 * @n: paramter to be passed
 * @...: A variable number to be calculated
 *
 * Return: 0 if n == 0, else the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x, sum = 0;

	va_start(ap, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
