#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: pointer to the allocated memory OR
 *         98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *add = malloc(b);

	if (add == NULL)
		exit(98);

	return (add);
}
