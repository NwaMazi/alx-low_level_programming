#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - this program allocates memory using malloc
 * @b: number of bytes reserved
 *
 * Return: a pointer to reserved memory
 */
void *malloc_checked(unsigned int b)
{
	void *pter;

	pter = malloc(b);

	if (pter == NULL)
		exit(98);

	return (pter);
}
