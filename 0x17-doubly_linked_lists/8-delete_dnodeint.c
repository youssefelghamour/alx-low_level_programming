#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 *
 * @head: head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *before, *after, *middle;
	unsigned int i = 0;

	before = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		after = before->next;
		if (after != NULL)
			after->prev = NULL;
		free(before);
		*head = after;
		return (1);
	}

	while (before)
	{
		after = before->next->next;
		middle = before->next;

		if (i == index - 1)
		{
			before->next = after;

			if (after != NULL)
				after->prev = before;

			free(middle);
			return (1);
		}

		i++;
		before = before->next;
	}

	return (-1);
}
