#include <stdlib.h>
#include "main.h"

/**
 * concatenates all the arguments of the program
 * @sc: argument count
 * @av: array of argument values
 *
 * Return: pointer to the concatenated string
 *         NULL if failure
 */
char *argstostr(int ac, char **av)
{
	char *new_str;
	int arg, elem, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (elem = 0; av[arg][elem]; elem++)
			size++;
	}

	new_str = malloc((sizeof(char) * size) + 1);

	if (new_str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (elem = 0; av[arg][elem]; elem++)
			str[index++] = av[arg][elem];

		str[index++] = '\n';
	}

	new_str[size] = '\0';

	return (new_str);
}
