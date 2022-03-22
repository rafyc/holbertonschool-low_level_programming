#include "lists.h"

/**
 * insert_nodeint_at_index - main func
 * @head: param 1
 * @idx: param 2
 * @n: param 3
 * Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newlist;
	listint_t *ptr = *head;
	unsigned int i = 0;

	newlist = malloc(sizeof(listint_t));
	if (newlist == 0)
		return (NULL);

	newlist->n = n;
	newlist->next = NULL;

	if (idx == 1)
	{
		newlist->next = *head;
		*head = newlist;
	}

	while (i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	newlist->next = ptr->next;
	ptr->next = newlist;
	return (newlist);
}
