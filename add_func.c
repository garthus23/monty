#include "monty.h"

/**
 * add_func - add the top two elements
 * @h: a doubly linked list
 * @j: an index in a list
 * Return: Nothing
**/

void add_func(stack_t **h, unsigned int j)
{
	stack_t *current;

	if (*h)
		current = *h;

	if (current->next)
	{
		current->next->n = current->next->n + current->n;
		current->next->prev = NULL;
		*h = current->next;
		current->next = NULL;
		free(current);
	}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too short", j);
		exit(EXIT_FAILURE);
	}
}
