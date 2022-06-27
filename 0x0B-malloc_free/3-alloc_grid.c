#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2-dimensional array
 *              of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: NULL on failure OR if @width or @height == 0
 *         pointer to the 2-dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **two_dim_arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_dim_arr = malloc(sizeof(int *) * height);

	if (two_dim_arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		two_dim_arr[i] = malloc(sizeof(int) * width);
		if (two_dim_arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(two_dim_arr[i]);

			free(two_dim_arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			twoD[i][j] = 0;
	}

	return (two_dim_arr);
}
