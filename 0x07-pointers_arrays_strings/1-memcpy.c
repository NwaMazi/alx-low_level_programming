#include "main.h"
/**
 *_memcpy - this program a function that copies memory area
 *@dest: memory being stored
 *@src: memory being copied
 *@n: number of bytes
 *
 *Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
