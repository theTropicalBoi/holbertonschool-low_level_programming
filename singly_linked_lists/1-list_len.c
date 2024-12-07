#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}