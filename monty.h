#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char **arr;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


int continue_process(char **argv, char **buff);
int call_opcode(stack_t **h, unsigned int j, FILE *fptr);
int push_int(stack_t *h, int j, FILE *fptr);
void push_func(stack_t **h, unsigned int j);
void pall_func(stack_t **h, unsigned int j);
void swap_func(stack_t **h, unsigned int j);
void pint_func(stack_t **h, unsigned int j);
void sub_func(stack_t **h, unsigned int j);
void pop_func(stack_t **h, unsigned int j);
void add_func(stack_t **h, unsigned int j);
void nop_func(stack_t **h, unsigned int j);
int string_from_line(FILE *fptr, char **buff, char *c);
char **string_to_array(char *buff, stack_t *h, int j, FILE *fptr);
void free_arr(char **arr);
int free_all(char **arr, stack_t *h);
void free_dlistint(stack_t *head);

#endif

