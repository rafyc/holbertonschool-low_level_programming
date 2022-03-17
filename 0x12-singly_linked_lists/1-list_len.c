#include "lists.h"

/**
 * print_list - main function
 * @h: first node
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			return (0);
		}
		else
		{
			h = h->next;
			n++;
		}
	}
return (n);

}
