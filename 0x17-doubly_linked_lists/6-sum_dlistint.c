/**
 * sum_dlistint - main function
 * @head: param1
 * Return: int
 */

#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
