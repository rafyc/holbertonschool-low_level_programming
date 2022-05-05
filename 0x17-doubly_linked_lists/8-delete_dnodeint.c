#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: main function.
 * Return: Always EXIT_SUCCESS.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * delete_dnodeint_at_index - main function.
 * @head: param1.
 * @index: param2.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t len = dlistint_len(*head);
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (len < index || *head == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = tmp->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	if (index == len)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	while (i < index - 1)
	{

		tmp = tmp->next;
		i++;
	}
	if (tmp->next)
	{
		tmp->next = tmp->next->next;
		free(tmp->next->prev);
		tmp->next->prev = tmp;
	}
	return (1);
}
