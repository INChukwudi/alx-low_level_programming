#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the first element of the array
 * @max: the last element of the array
 *
 * Return: pointer to the newly created array
 *         NULL if @min > @max OR malloc fails
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
