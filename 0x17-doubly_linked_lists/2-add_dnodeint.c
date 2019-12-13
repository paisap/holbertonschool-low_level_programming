#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux, new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	aux = new;
	new->n = n;
	*head = new;
	while (aux->next)
	{
		 aux = aux->next;
	}


		
