#include "search_algos.h"

/**
 * recursive_search - searches for the value recursively after initial checks
 * @array: pointer to the first element of the array to search in
 * @left: start index of @array
 * @right: end index of @array
 * @value: value to search for in @array
 *
 * Return: -1, if @value is not in @array
 *         index where @valeu in located in @array
 */
int recursive_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (recursive_search(array, left, i, value));
	return (recursive_search(array, i + 1, right, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the firt element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for in @array
 *
 * Return: -1 if @array is NULL or @value is not in @array
 *         index where @value is located in @array
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_search(array, 0, size - 1, value));
}
