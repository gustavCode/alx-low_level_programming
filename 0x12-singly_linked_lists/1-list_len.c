#include "lists.h"

/**
 * list_len - Returns the number of element in
 *		a linked list_t list
 * @h: linked list_t list
 *
 * Return: Number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
