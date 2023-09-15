#include "lists.h"

/**
 * dlistint_len - Count nbr of elements in a linked_list.
 * @h: The head list.
 *
 * Return: elements in the dlistint_t list nbr.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		h = h->next;
	}

	return (nod);
}
