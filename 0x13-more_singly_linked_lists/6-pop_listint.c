#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: the head of the list
 *
 * Return: the value of the deleted node, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
