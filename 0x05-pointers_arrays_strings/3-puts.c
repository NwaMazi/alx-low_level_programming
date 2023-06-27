#include "main.h"
/**
 * _puts - this program display a string, followed by a new line
 * @str: string to display
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
