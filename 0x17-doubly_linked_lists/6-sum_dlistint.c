#include "lists.h"

/**
 * sum_dlistint - Sums all the data.
 * @head: The head list.
 *
 * Return: The sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int summ = 0;

	while (head)
	{
		summ += head->n;
		head = head->next;
	}

	return (summ);
}
