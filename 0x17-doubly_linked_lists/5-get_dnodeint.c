#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in list.
 * @head: The head of list.
 * @index: The node location.
 *
 * Return: fail- NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
