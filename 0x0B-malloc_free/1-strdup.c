#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *           which contains a copy of @str
 * @str: the string to be duplicated
 *
 * Return: a pointer to a new string which is a duplicate of @str
 *         NULL if @str == NULL && if insufficient memory available
 */
char *_strdup(char *str)
{
	char *copy;
	int index, length = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		length++;

	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		copy[index] = str[index];

	copy[length] = '\0';

	return (copy);
}
