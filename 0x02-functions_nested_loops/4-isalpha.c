#include "main.h"

/**
 * _isalpha - Checks for an alphabet
 * @c: Character to be checked
 * Return: 0 if character is an alphabet, 1 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
