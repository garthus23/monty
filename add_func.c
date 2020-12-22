#include "monty.h"

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
}
