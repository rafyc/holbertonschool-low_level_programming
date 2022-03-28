#include "lists.h"

/**
 * free_list - fonction
 * @head: param
 */

void free_list(list_t *head)
{
	list_t *newfree;

	while (head)
	{
		newfree = head->next;
		free(head->str);
		free(head);
		head = newfree;
	}
}
