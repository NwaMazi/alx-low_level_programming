#include "main.h"
/**
 * _puts - this program prints a string, followed by a new line
 * @str: reference
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
