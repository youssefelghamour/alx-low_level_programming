#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: head of a list
 * @index: index of the node
 *
 * Return: nth node, or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	node = head;

	for (i = 0; i < index && node != NULL; i++)
	{
		node = node->next;
	}

	return (node);
}
