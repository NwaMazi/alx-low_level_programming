#include "main.h"

/**
 * _islower - Detects lowercase alphabet.
 * @c: is the character to be checked
 * Return: 0 if character is lowercase, otherwise 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
