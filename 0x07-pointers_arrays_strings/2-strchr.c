#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to be looked for
 *
 * Return: the pointer to the first occurence of the string
 *    NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
