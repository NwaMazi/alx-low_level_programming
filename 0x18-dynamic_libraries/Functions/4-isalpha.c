#include "main.h"

/**
 * _isalpha - this program checks for alphabetic character
 * @c: reference
 * Return: 1 if true , 0 if false
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
