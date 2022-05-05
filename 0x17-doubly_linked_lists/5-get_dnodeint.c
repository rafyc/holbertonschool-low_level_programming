/**
 * get_dnodeint_at_index - main function
 * @head: param1
 * @index: param2
 * Return: nothing
 */

#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		head = head->next;
		count++;

		if (count == index)
			return (head);
	}
	return (head);
}
