#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *insert_nodeint_at_index - writes the character c to stdout
 * @head: The character to print
 * @idx: name
 * @n: new nodo
 *
 * Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux;
	listint_t *tmp;
	unsigned int t = 1;

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
		return (NULL);
	aux->n = n;
	if ((*head) == NULL)
	{
		(*head) = aux;
		return (*head);
	}
	tmp = *head;
	while (t < idx && tmp != NULL)
	{
		tmp = tmp->next;
		t++;
	}
	if (t == idx)
	{
		aux->next = tmp->next;
		tmp->next = aux;
		return (aux);
	}
	return (NULL);
}
