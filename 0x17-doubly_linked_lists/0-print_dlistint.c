#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;
	const dlistint_t *aux;
	if (h == NULL)
		return (0);
	aux = h;
	while (aux->next != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
		cont++;
	}
	printf("%d\n", aux->n);
	cont++;
	return (cont);
}
