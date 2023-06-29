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

	while (dest[x]) != '\0')
	{
		x++;
	}
	while (scr[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
