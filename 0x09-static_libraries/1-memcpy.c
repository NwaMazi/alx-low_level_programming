#include "main.h"
/**
 *_memcpy - this program is a function that copies an area in memory
 *@dest: memory location to stored
 *@src: memory location to be copied
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
