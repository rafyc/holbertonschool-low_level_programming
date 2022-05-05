/**
 * print_dlistint - main function
 * @h: param1
 * Return: 0 when fail
 */

#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{

		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
