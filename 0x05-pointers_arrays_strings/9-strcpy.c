#include "main.h"

/**
 * _strcpy - cpoies a string pointed to by @src including the
 * terminating null byte to a buffer pointed to by @dest.
 * @dest: pointer to buffer
 * @src: pointer to string
 *
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
