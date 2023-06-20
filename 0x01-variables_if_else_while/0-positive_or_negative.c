#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program determines if a number is positive, negative or zero.
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive number\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative number\n", n);
	}
	return (0);
}

