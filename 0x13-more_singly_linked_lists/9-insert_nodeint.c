#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the head of the list
 * @idx: index of the list where the new node is added
 * @n: int
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new;
	unsigned int i;

	node = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && node != NULL; i++)
			node = node->next;
	}

	new = malloc(sizeof(listint_t));

	if ((node == NULL && idx != 0) || new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = node->next;
		node->next = new;
	}

	return (new);
}
