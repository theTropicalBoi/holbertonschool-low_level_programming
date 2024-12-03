#include "lists.h"
/**
 * add_node - Add a new node at the beginning of the list.
 * @head: Pointer to the pointer of the head of the list.
 * @str: String added to the new node.
 * Return: Address of new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *cp_str;
	unsigned int length = 0;

	if (head == NULL || str == NULL)
	return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	cp_str = strdup(str);
	if (cp_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[length])
	length++;

	new_node->str = cp_str;
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
