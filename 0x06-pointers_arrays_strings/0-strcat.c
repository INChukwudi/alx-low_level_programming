#include "main.h"

/**
 * _strcat - concatenates two strings and returns a pointer 
 * to the concatenated string
 * @dest: the first string that gets added to
 * @src: the string to add to @dest
 *
 * Return: pointer of @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *dest[i] != '\0'; i++);

	for (j = 0; *src[j] != '\0'; j++, i++)
		*dest[i] = *src[j];
	*dest[i] = '\0';
	return *dest;
}
