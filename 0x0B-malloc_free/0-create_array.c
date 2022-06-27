#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of charfs and initialises it
 *                with a specific char
 * @size: the number of elements of the array
 * @c: the character the array should be initialised with
 *
 * Return: NULL if the size == 0 OR the memory allocation fails
 *         the pointer to the memory space allocated
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
