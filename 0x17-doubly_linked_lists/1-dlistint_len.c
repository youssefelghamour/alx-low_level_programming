#include "lists.h"

/**
 * dlistint_len - counts the elements of a dlistint_t list
 *
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
