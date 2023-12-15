#include "monty.h"
/**
 * f_push - adds a node to a stack
 * @head: head of the stack
 * @counter: line_number
 * Return: returns nothing || void
*/
void f_push(stack_t **head, unsigned int counter)
{
	int n, i = 0, flag = 0;

	if (ais.arg)
	{
		if (ais.arg[0] == '-')
			i++;
		for (; ais.arg[i] != '\0'; i++)
		{
			if (ais.arg[i] > 57 || ais.arg[i] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(ais.file);
			free(ais.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(ais.file);
		free(ais.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(ais.arg);
	if (ais.lifi == 0)
		addnodeintstack(head, n);
	else
		addnodeintqueue(head, n);
}
