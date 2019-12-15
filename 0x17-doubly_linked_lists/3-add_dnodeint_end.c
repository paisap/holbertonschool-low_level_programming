#include "lists.h"
/**
 * *add_dnodeint_end - writes the character c to stdout
 * @head: The character to print
 * @n: name
 *
 * Return: list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	aux = *head;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new;
		new->prev = aux;
	}
	return (new);
}
