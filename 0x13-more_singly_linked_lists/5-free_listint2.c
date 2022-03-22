#include "lists.h"

/**
 * free_listint2 - main func
 * @head: main param
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *newfree;

	if (head == NULL)
		return;

	while (*head)
	{
		newfree = (*head)->next;
		free(*head);
		*head = newfree;
	}
	head = NULL;
}
