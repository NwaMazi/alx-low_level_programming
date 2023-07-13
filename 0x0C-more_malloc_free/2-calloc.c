#include <stdlib.h>
#include "main.h"

/**
 * *_memset - this program fills memory with a constant byte
 * @s: memory argument
 * @b: char to copy
 * @n: value of times to copied
 *
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * *_calloc - this program allocates memory for an array
 * @nmemb: represents elements in the array
 * @size: size of element
 *
 * Return: pointer to reserved memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
