#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - this program duplicates to new memory of space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *xxx;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	xxx = malloc(sizeof(char) * (x + 1));

	if (xxx == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		xxx[y] = str[y];

	return (xxx);
}
