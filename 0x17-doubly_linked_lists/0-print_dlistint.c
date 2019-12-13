#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;
	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	printf("%d\n", h->n);
	cont++;
	return (cont);
}
