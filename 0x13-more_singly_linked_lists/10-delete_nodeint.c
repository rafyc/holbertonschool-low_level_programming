#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *count = *head;
	listint_t *temp;
	unsigned int i = 0;
	
	if (*head == NULL)
		return(-1);

	if (index == 0)
	{
		*head = (*head)->next;
		n = (*head)->n;
		free (count);
	}
	while (i < index - 1)
	{
		if (count == NULL)
			return(-1);

		count = count->next;
		i++;
	}
	temp = count->next;
	count->next = temp->next;
	free(temp);
	return(1);
	}
}
