#include "lists.h"

/**
 * free_listint - main function
 * @head: param1
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *newfree;

	while (head)
	{
		newfree = head->next;
		free(head);
		head = newfree;
	}
}
