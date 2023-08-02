#include "main.h"
/**
 * _memset - this program fill a block of memory with a specific value
 * @s: starting address of memory
 * @b: desired value
 * @n: bytes being changed
 *
 * Return: changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
