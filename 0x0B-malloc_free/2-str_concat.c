#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer that points to the memory space where the
 *         concatenated string resides
 *         NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int index, new_str_index = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		length++;

	for (index = 0; s2[index]; index++)
		length++;

	new_str = malloc(sizeof(char) * length);

	if (new_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		new_str[new_str_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		new_str[new_str_index++] = s2[index];

	return (new_str);
}
