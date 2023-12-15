/**
 * f_pall - prints all the data in a linked list
 * @h: pointer to the first node
 *
 * Return: nothing ||void
 */
void f_pall(stack_t **head, unsigned int counter)
{
	(void)counter;
	stack_t h = *head;

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
