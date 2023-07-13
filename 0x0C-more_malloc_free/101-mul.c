#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - this program checks if a string contains a symbol
 * @s: argument
 *
 * Return: 0 if false, 1 true
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - this program returns the length of a string
 * @s: argument
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}

/**
 * errors - errors handlings
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - this program multiplies two positive numbers
 * @argc: value of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len0, b, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len0 = len1 + len2 + 1;
	result = malloc(sizeof(int) * len0);
	if (!result)
		return (1);
	for (b = 0; b <= len1 + len2; b++)
		result[b] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (b = 0; b < len0 - 1; b++)
	{
		if (result[b])
			a = 1;
		if (a)
			_putchar(result[b] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
