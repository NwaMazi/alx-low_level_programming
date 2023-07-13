#include <stdio.h>
#include "main.h"

/**
 * _atoi - this program converts a string to an integer
 * @s: reference
 *
 * Return: int converted from the string
 */
int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int n = 0;
	int len = 0;
	int c = 0;
	int digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && c == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			c = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			c = 0;
		}
		a++;
	}

	if (c == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if true, 1 if any Error
 */
int main(int argc, char *argv[])
{
	int result, num0, num1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num0 = _atoi(argv[1]);
	num1 = _atoi(argv[2]);
	result = num0 * num1;

	printf("%d\n", result);

	return (0);
}
