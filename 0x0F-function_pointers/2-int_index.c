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
	int index;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if(cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
