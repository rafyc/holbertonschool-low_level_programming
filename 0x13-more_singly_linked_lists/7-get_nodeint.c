#include "lists.h"

/**
 * get_nodeint_at_index - main func
 * @head: param1
 * @index: param2
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		head = head->next;
		count++;
	}

	return (head);

}
