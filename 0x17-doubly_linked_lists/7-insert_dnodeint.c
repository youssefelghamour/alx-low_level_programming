#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: int value for new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *before, *after;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	before = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (before)
	{
		after = before->next;

		if (i == idx - 1)
		{
			new->prev = before;
			new->next = after;

			before->next = new;

			if (after != NULL)
				after->prev = new;

			return (new);
		}

		i++;
		before = before->next;
	}

	return (NULL);
}
