#include "lists.h"


/**
 * print_list - prints a linked list
 * @h: head of list
 * Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str;
		h = h->next;
		i++;
	}
	return (i);
}
