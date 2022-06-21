#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory srea
 * @b: the constant byte
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory location
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *mem = s, val = b;

	for (i = 0; i < n; i++)
		mem[i] = val;

	return (mem);
}
