#include "lists.h"
/**
* insert_dnodeint_at_index- sum of all the data of a double list
* @head: pointer to the first element
*
* Description: this function sum the data of a double list
* Return: the sum of all data in the list
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *new, *tmp, *aux = *h;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (aux)
	{
		if (i == idx && aux->next != NULL)
		{
			tmp = aux->next;
			new->next = tmp;
			new->prev = aux;
			aux->next = new;
			tmp->prev = new;
			return (new);
		}
		if (i == idx && aux->next == NULL)
		{
			new->next = NULL;
			new->prev = aux;
			aux->next = new;
			return (new);
		}
		i++;
		aux = aux->next;
	}
	return (NULL);
}
