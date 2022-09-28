#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint linked list
 * @head: pointer ot the address of the list's head
 *
 * Return: 0 - if the list is empty
 *         node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (ret);
}
