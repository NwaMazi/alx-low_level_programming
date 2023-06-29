#include "main.h"

/**
 * char *_strcat - this program concatinates but appends two strings.
 * @dest: destination
 * @src: origin
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for ( ; y < x ; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
