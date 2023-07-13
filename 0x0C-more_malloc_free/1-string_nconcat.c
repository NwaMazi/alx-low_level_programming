#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - this program concatenates n
 * bytes of a string to another string
 * @s1: argument being append
 * @s2: argument being concatenate
 * @n: value of bytes
 *
 * Return: pointer to final string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x = 0, y = 0, len0 = 0, len1 = 0;

	while (s1 && s1[len0])
		len0++;
	while (s2 && s2[len1])
		len1++;

	if (n < len1)
		s = malloc(sizeof(char) * (len0 + n + 1));
	else
		s = malloc(sizeof(char) * (len0 + len1 + 1));

	if (!s)
		return (NULL);

	while (x < len0)
	{
		s[x] = s1[x];
		x++;
	}

	while (n < len1 && x < (len0 + n))
		s[x++] = s2[y++];

	while (n >= len1 && x < (len0 + len1))
		s[x++] = s2[y++];

	s[x] = '\0';

	return (s);
}
