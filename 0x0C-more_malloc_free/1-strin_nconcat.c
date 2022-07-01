#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes in @s2 that should be concatenated
 *
 * Return: NULL if the function fails
 *         pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_string;
	unsigned int len = 0, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s2[index]; index++)
		len++;

	if (len > n)
		len = n;

	for (index = 0; s1[index]; index++)
		len++;

	concat_string = malloc(sizeof(char) * (len + 1));
	if (concat_string == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat_string[len++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_string[len++] = s2[index];

	concat_string[len] = '\0';

	return (concat_string);
}
