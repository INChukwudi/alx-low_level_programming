#include "main.h"

/**
 * _abs - retunrs the absolute value of a number passed
 * @c: number passed in
 *
 * Return: the absolute value
 */
int _abs(int c)
{
	if (c < 0)
		c = (-1) * c;
	return c;
}
