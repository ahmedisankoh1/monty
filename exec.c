#include "monty.h"
/**
 * execute - executes the given opcode
 * @content: It contains the line content
 * @stack: Head of the doubly linked list - stack
 * @counter: It is the line counter
 * @file: It is a pointer to the monty file
 *
 * Return: returns 0 on success
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
	{
		return (0);
	}
	ais.arg = strtok(NULL, " \n\t");

	switch (op[0])
	{
	case 'p':
		if (!strcmp(op, "push"))
			f_push(stack, counter);
		else if (!strcmp(op, "pall"))
			f_pall(stack, counter);
		break;
		/**
	case 'a':
		if (!strcmp(op, "add"))
			f_add(stack, counter);
		break;
	case 's':
		if (!strcmp(op, "sub"))
			f_sub(stack, counter);
		break;
	case 'm':
		if (!strcmp(op, "mul"))
			f_mul(stack, counter);
		break;
		**/
	default:
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	return (0);
}
