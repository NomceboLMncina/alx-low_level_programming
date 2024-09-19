#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *x;
	dlistint_t *y;
	unsigned int z;

	x = NULL;
	if (idx == 0)
		x = add_dnodeint(h, n);
	else
	{
		y = *h;
		z = 1;
		if (y != NULL)
			while (y->prev != NULL)
				y = y->prev;
		while (y != NULL)
		{
			if (z == idx)
			{
				if (y->next == NULL)
					x = add_dnodeint_end(h, n);
				else
				{
					x = malloc(sizeof(dlistint_t));
					if (x != NULL)
					{
						x->n = n;
						x->next = y->next;
						x->prev = y;
						y->next->prev = x;
						y->next = x;
					}
				}
				break;
			}
			y = y->next;
			z++;
		}
	}

	return (x);
}

