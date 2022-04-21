#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t n_nodes = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("[%u]", temp->len);
		if (!temp->str)
			printf("(nil)\n");
		else
			printf("%s\n", temp->str);
		temp = temp->next;
		n_nodes++;
	}
	return (n_nodes);
}
