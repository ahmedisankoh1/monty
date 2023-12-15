#include "monty.h"
/**
 * f_pall - prints all the data in a linked list
 * @head: pointer to the first node
 * @counter: unsued in this functiog
 *
 * Return: nothing ||void
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h->prev != NULL)
		h = h->prev;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	printf("%d\n", h->n);
}
