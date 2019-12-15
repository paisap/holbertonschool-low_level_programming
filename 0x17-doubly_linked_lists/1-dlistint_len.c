#include "lists.h"
/**
 * dlistint_len - writes the character c to stdout
 * @h: The character to print
 *
 * Return: On success 1.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t t = 0;
	const dlistint_t *aux;

	if (h == NULL)
		return (0);
	aux = h;
	while (aux->next != NULL)
		aux = aux->next, t++;
	t++;
	return (t);
}
