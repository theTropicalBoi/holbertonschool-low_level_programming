#include "lists.h"
/**
 * sum_dlistint- Function that return the sum of a list.
 * @head: Pointer to the head of the list.
 * Return: Sum of all data, 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
