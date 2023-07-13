#include "main.h"
#include <stdlib.h>
/**
 * argstostr - program main entry point
 * @ac: input argument
 * @av: double pointer
 * Return:0
 */
char *argstostr(int ac, char **av)
{
	int x, n, y = 0, X = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (n = 0; av[x][n]; n++)
		X++;
	}
	X += ac;

	str = malloc(sizeof(char) * X + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (n = 0; av[x][n]; n++)
	{
		str[y] = av[x][n];
		y++;
	}
	if (str[y] == '\0')
	{
		str[y++] = '\n';
	}
	}
	return (str);
}
