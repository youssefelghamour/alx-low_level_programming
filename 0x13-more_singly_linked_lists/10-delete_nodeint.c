#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 *
 * @head: the head of the list
 * @index: index of the deleted node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev, *current;

	prev = *head;
	current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;

		return (1);
	}

	while (current)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			current = NULL;

			return (1);
		}
		i++;
		prev = current;
		current = current->next;
	}

	return (-1);
}
