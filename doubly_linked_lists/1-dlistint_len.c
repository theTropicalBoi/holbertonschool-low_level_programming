#include "lists.h"
/**
 * dlistint_len - Function that return the number of elements in a list.
 * @h: Pointer to the head of the list.
 * Return: Number of elements in "dlistint_t".
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current =h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
