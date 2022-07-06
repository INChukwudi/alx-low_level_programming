#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the haystack
 * @size: the size of the array
 * @cmp: pointer that compares the values
 *
 * Return: -1 if no element matches
 *         -1 if size is <= 0
 *         index of the firs occurence of the needle
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	while (size-- > 0)
	{
		if (cmp(*array) != 0)
			return cmp(*array);

		array++;
	}

	return (-1);
}
