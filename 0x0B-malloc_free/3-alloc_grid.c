#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - this program is a nested loop that makes a grid
 * @width: width size
 * @height: height size
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **hmm;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	hmm = malloc(sizeof(int *) * height);

	if (hmm == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		hmm[a] = malloc(sizeof(int) * width);

		if (hmm[a] == NULL)
		{
			for (; a >= 0; a--)
				free(hmm[a]);

			free(hmm);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			hmm[a][b] = 0;
	}

	return (hmm);
}
