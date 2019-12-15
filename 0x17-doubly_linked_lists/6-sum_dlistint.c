#include "lists.h"
/**
* sum_dlistint- returns the nth node of a double list
* @head: pointer to the first element
*
* Description: this function gets the nth node of a double list
* Return: the new head
*/
int sum_dlistint(dlistint_t *head)
{
	int x = 0;

	if (head == NULL)
		return (x);
	while (head)
		x = head->n + x, head = head->next;
	return (x);
}
