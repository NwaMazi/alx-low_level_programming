#include "main.h"
/**
 * _memset - this program fill a block of memory with a specific value
 * @s: begining address of memory
 * @b: reference value
 * @n: reference value of bytes to be changed
 *
 * Return: changes array @ n bytes with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;
	x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
