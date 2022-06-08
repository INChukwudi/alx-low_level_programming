#include "main.h"

/**
 * isalpha - checks if an input is a letter
 * @c: input that is checked against
 *
 * Return: 1 if input is a letter or 0 if input isn't
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
