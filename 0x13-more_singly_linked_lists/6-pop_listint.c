#include "lists.h"

/**
 * pop_listint - main funct
 * @head: param
 * Return: Always 0.
 */

int pop_listint(listint_t **head)
{
	int temp;

	if (head == NULL)
		return(0);

	if (*head == NULL)
	{
		return (0);
	}

	temp = (*head)->n;
	*head = (*head)->next;
	return (temp);
}
