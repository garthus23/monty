#include "monty.h"

/**
 * div_func - div the top two elements
 * @h: a doubly linked list
 * @j: an index in a list
 * Return: Nothing
**/

void div_func(stack_t **h, unsigned int j)
{
	stack_t *current;

	if (*h)
		current = *h;

	if (current->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", j);
		exit(EXIT_FAILURE);
	}
	if (current->next)
	{
		current->next->n = current->next->n / current->n;
		current->next->prev = NULL;
		*h = current->next;
		current->next = NULL;
		free(current);
	}
	else
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", j);
		exit(EXIT_FAILURE);
	}
}
