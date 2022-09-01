#include "lists.h"

/**
 * distint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head of th elist
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}