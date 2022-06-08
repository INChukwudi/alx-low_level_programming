#include "main.h"

/**
 * _islower - checks if an alphabet is in lowercae
 *
 * Return: 0 if the letter isn't lowercase
 * 1 if the letter is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	
	return (0);
}
