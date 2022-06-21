#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory srea
 * @b: the constant byte
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory location
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
