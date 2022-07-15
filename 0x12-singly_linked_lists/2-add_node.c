#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the start of the list
 * @str: string to be stored in the list
 *
 * Return: NULL if function fails
 *         address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *temp = strdup(str);
	int len = 0;
	list_t *new_node;

	if (temp == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node->str = temp;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
