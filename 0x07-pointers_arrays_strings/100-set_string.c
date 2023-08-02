#include "main.h"

/**
 * set_string - this program sets the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: pointer to char
 */

void set_string(char **s, char *to)
{
	*s = to;
}

