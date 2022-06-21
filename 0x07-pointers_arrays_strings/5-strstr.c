#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be checked on
 * @needle: strign to be checked for
 *
 * Return: a pointer to the beginning of the located substring
 *     or NULL if the substrign is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}

		haystack++;
		}

	return ('\0');
}
