#include "monty.h"
/**
 * addnodeintstack - add a new node at the top of the stack
 * @head: a pointer to ths stack
 * @n: value to be added
 * Return: returns nothing || void
 */
void addnodeintstack(stack_t **head, const int n)
{
	stack_t *new;
	stack_t *h;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("There is an error\n");
		exit (0);
	}

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

}
