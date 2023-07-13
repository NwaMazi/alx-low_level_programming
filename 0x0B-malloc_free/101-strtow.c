#include <stdlib.h>
#include "main.h"

/**
 * count_word - this program is a function to count
 * the number of words in a string
 * @s: argument to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, x, y;

	flag = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			y++;
		}
	}

	return (y);
}
/**
 * **strtow - this program splits a string into words
 * @str: argument to split
 * Return: pointer to an array if correct or NULL if error
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, b = 0, lgt = 0, wrds, c = 0, start, end;

	while (*(str + lgt))
		lengt++;
	wrds = count_wrd(str);
	if (wrds == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (wrds + 1));
	if (matrix == NULL)
		return (NULL);

	for (a = 0; a <= lgt; a++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	matrix[b] = NULL;

	return (matrix);
}
