#include <stdlib.h>
#include "dog.h"

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

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: NULL if function fails
 *         pointer to the struct dog type object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_struct;
	char *name_cpy;
	char *owner_cpy;

	new_dog_struct = malloc(sizeof(dog_t));
	if (new_dog_struct == NULL)
		return (NULL);

	name_cpy = _strdup(name);
	if (name_cpy == NULL && name != NULL)
	{
		free(new_dog_struct);
		return (NULL);
	}

	owner_cpy = _strdup(owner);
	if (owner_cpy == NULL && owner != NULL)
	{
		free(name_cpy);
		free(new_dog_struct);
		return (NULL);
	}

	new_dog_struct->name = name_cpy;
	new_dog_struct->age = age;
	new_dog_struct->owner = owner_cpy;
	return (new_dog_struct);
}
