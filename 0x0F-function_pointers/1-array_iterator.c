#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *                  on each element of an array
 * @array: array
 * @size: size of the array
 * @action: the function to be executed
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	size_t index;

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
