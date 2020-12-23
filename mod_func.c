#include "monty.h"

/**
 * mod_func - div the top two elements
 * @h: a doubly linked list
 * @j: an index in a list
 * Return: Nothing
**/

void mod_func(stack_t **h, unsigned int j)
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
		current->next->n = current->next->n % current->n;
		current->next->prev = NULL;
		*h = current->next;
		current->next = NULL;
		free(current);
	}
	else
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", j);
		exit(EXIT_FAILURE);
	}
}
