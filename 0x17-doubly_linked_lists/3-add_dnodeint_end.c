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
	dlistint_t *y;
	dlistint_t *x;

	x = malloc(sizeof(dlistint_t));
	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = NULL;

	y = *head;

	if (y != NULL)
	{
		while (y->next != NULL)
			y = y->next;
		y->next = x;
	}
	else
	{
		*head = x;
	}

	x->prev = y;

	return (x);
}
