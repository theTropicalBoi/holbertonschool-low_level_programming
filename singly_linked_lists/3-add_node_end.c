#include "lists.h"

/**
 * add_node_end - Add a new node at the end of list_t list.
 * @head: Pointer to the pointer of the head of the list.
 * @str: String to be added to the new node.
 * Return: Address of the new element, or NULL if fail.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *end;
	char *copy_str;
	unsigned int length = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	copy_str = strdup(str);
	if (copy_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[length])
		length++;

	new_node->str = copy_str;
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new_node;
	}
	return (new_node);
}
