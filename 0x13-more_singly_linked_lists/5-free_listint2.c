#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (!head)
		return;

	current = *head;

	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
