#include "main.h"

/**
 * _pow_recursion - this program returns the
 * value of x raised to the power of y
 * @x: value to be raised
 * @y: initializing pow
 *
 * Return: result of pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
