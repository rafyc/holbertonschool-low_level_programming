#include "lists.h"

/**
 * pop_listint - main funct
 * @head: param
 * Return: Always 0.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;

	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
