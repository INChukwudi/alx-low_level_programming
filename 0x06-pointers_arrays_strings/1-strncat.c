#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes
 * and returns a pointer to the concatenated string
 * @dest: the first string that gets added to
 * @src: the string to add to @dest
 * @n: number of bytes to concatenate
 *
 * Return: pointer of @dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; *dest[i] != '\0'; i++);

	for (j = 0; j < n; j++, i++)
		*dest[i] = *src[j];
	*dest[i] = '\0';
	return *dest;
}
