#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - this program prints the minimum number of coins to
 * make change for any given amount of money
 * @argc: reference arguments
 * @argv: reference arguments
 *
 * Return: 0 if correct, 1 if any error
 */
int main(int argc, char *argv[])
{
	int num, x, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && num >= 0; x++)
	{
		while (num >= coins[x])
		{
			res++;
			num -= coins[x];
		}
	}

	printf("%d\n", res);
	return (0);
}
