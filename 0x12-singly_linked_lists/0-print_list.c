#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - writes the character c to stdout
 * @h: The character to print
 *
 * Return: On success 1.
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		t++;
		h = h->next;
	}
	return (t);

}
