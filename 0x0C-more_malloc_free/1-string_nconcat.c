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
	unsigned int a = 0, b = 0, len0 = 0, len1 = 0;

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

	while (a < len1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < len1 && a < (len0 + n))
		s[a++] = s2[b++];

	while (n >= len1 && a < (len0 + len1))
		s[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}
