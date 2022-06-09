#include "main.h"

/**
 * _isdigit - checks if the input is a digit or not
 * @c: the input to be checked against
 *
 * Return: 1 if the input is a digit and 0 if it is not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
