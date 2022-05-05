/**
 * free_dlistint - main function
 * @head: param1
 * Return: nothing
 */

#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new_free;

	while (head)
	{
		new_free = head->next;
		free(head);
		head = new_free;
	}
}
