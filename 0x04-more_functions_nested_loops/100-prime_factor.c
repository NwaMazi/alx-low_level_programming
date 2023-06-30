#include <stdio.h>
#include <math.h>

/**
 * main - this program finds and prints the bigest prime factor of 612852475143
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	long int max = -1;
	long int i;
	long int n = 612852475143;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
