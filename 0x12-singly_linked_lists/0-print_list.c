#include "lists.h"

/**
 * print_list - main function
 * @h: first node
 * Return: number of char.
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		return (1);

	}

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
return (n);
}
