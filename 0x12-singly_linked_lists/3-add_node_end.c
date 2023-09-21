#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: head of the linked list
 * @str: string
 *
 * Return: the address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *node;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new->len = n;
	new->next = NULL;
	node = *head;

	if (node)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	else
	{
		*head = new;
	}

	return (*head);
}
