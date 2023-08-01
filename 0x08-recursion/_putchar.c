#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 if successful
 * else error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
