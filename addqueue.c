#include "monty.h"
/**
 * addnodeintqueue - adds a node to the end of a queue
 * @head: double pointer to the beginning of the queue
 * @n: value to add to new node
 *
 * Return: nothing || void
 */
void addnodeintqueue(stack_t **head, const int n)
{
	stack_t *h;
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		exit (0);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;

}
