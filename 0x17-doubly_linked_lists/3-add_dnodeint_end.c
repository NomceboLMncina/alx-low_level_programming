#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *x;
	dlistint_t *y;

	y = malloc(sizeof(dlistint_t));
	if (y == NULL)
		return (NULL);

	y->n = n;
	y->next = NULL;

	x = *head;

	if (x != NULL)
	{
		while (x->next != NULL)
			x = x->next;
		x->next = y;
	}
	else
	{
		*head = y;
	}

	new->prev = x;

	return (y);
}
