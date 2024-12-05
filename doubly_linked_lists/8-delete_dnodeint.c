#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node at given index
 * @head: Pointer to pointer to the head of the list
 * @index: Index of the node to delete
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	/* Check if list is empty */
	if (*head == NULL)
		return (-1);

	/* If deleting first node */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse to the node to be deleted */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/* If index is out of range */
	if (current == NULL)
		return (-1);

	/* Update the links and free the node */
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
