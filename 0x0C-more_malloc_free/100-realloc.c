#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using amlloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for @ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: @ptr if @new_size == @old_size
 *         NULL if @new_size == 0
 *         pointer to new memory location
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_copy, *mem;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (index = 0; index < old_size && index < new_size; index++)
		mem[index] = *ptr_copy++;

	free(ptr);
	return (mem);
}
