#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmeb: the umber of members of the array
 * @size: the size of the array members
 *
 * Return: pointer to the allocated memory
 *         NULL if @nmemb or @size == 0
 *         NULL if malloca fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int index;

	if (size == 0 || nmemb == 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	for (index = 0; index < (size * nmemb); index++)
		arr[index] = 0;

	return (arr);
}
