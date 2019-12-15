#include "lists.h"
/**
 * *add_dnodeint - writes the character c to stdout
 * @head: The character to print
 * @n: name
 *
 * Return: list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux, *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	aux = *head;
	new->next = aux;
	*head = new;
	return (new);
}
