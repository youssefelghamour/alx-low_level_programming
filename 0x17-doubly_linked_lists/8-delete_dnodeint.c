#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 *
 * @head: head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 *
 *int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
 *{
 *    dlistint_t *before, *after, *middle;
 *    unsigned int i = 0;
 *
 *    before = *head;
 *
 *    if (*head == NULL)
 *        return (-1);
 *
 *    if (index == 0)
 *    {
 *        after = before->next;
 *        if (after != NULL)
 *            after->prev = NULL;
 *        free(before);
 *        *head = after;
 *        return (1);
 *    }
 *
 *    while (before)
 *    {
 *        after = before->next->next;
 *        middle = before->next;
 *
 *        if (i == index - 1)
 *        {
 *            before->next = after;
 *
 *            if (after != NULL)
 *                after->prev = before;
 *
 *            free(middle);
 *            return (1);
 *        }
 *
 *        i++;
 *        before = before->next;
 *    }
 *
 *    return (-1);
 *}
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int i;

	h1 = *head;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;

	i = 0;

	while (h1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;

				if (h1->next != NULL)
					h1->next->prev = h2;
			}

			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		i++;
	}

	return (-1);
}
