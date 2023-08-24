#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the list_t list.
 *
 * Return: total nodes at the end
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		if (h->str == NULL)
		{
			printf("[%lu] (nil)\n", nodes);
		}
		else
		{
			printf("[%lu] %s\n", nodes, h->str);
		}
		h = h->next;
	}

	return (nodes);
}
