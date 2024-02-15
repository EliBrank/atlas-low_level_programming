#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of ints
 * @width: array width
 * @height: array height
 *
 * Return: pointer to array, NULL if failure
 */

int **alloc_grid(int width, int height)
{
	int **gridArr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	gridArr = malloc(sizeof(int *) * height);
	if (gridArr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridArr[i] = malloc(sizeof(int) * width);
		if (gridArr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(gridArr[j]);
			}
			free(gridArr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			gridArr[i][j] = 0;
		}
	}

	return (gridArr);
}
