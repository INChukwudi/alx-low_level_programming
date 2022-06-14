#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, len = 0;

	while (s[i++])
		len++;
	
	for (i = len - 1; i >= len / 2; i--)
	{
		char tmp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
