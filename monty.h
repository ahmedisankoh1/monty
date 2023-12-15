#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct monty_s - variables -args, file, line content
 * @arg: Deals with the value
 * @file: It is a pointer to the monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct monty_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  monty;
extern monty ais;

void addnodeintstack(stack_t **head, const int n);
void addnodeintqueue(stack_t **head, const int n);
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
void f_push(stack_t **head, unsigned int counterg);
void free_stack(stack_t *head);
void f_pall(stack_t **head, unsigned int counter);

#endif
