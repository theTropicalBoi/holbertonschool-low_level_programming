#include "lists.h"
/**
 * print_dlistint - Function that print all the elements of a list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
