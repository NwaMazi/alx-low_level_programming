#include "main.h"

/**
 * _atoi - this program converts a string to an integer
 * @s: string
 *
 * Return: converted string
 */
int _atoi(char *s)
{
	int a, b, n, l, f, dgit;

	a = 0;
	b = 0;
	n = 0;
	l = 0;
	f = 0;
	dgit = 0;

	while (s[l] != '\0')
		l++;

	while (a < l && f == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			dgit = s[a] - '0';
			if (b % 2)
				dgit = -dgit;
			n = n * 10 + dgit;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);

	return (n);
}
