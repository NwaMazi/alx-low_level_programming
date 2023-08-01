#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - this program checks if a string is a palindrome
 * @s: value of string to be reversed
 *
 * Return: 1 if it is ok, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - this program returns the length of a string
 * @s: value of string to evaluated
 *
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - this program checks the characters recursively for palindrome
 * @s: string to evaluate
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if it is palindrome, else 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
