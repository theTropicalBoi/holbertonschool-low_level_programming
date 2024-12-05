#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns the node of a list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to return
 * Return: The nth node or NULL if doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}

	return (NULL);
}
