#include "main.h"

/**
 * _isupper - checks if the letter is an uppercase
 * @c: the letter to be checked against
 *
 * Return: 1 if the letter is uppercase and 0 if it is not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
