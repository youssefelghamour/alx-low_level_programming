#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 *
 * @head: the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;

	while (head)
	{
		num++;
		printf("[%p] %d\n", (void *)head,  head->n);
		head = head->next;
	}
	return (num);
}
