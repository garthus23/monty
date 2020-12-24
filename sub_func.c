#include "monty.h"

/**
 * sub_func - sub the top two elements
 * @h: a doubly linked list
 * @j: an index in a list
 * Return: Nothing
**/

void sub_func(stack_t **h, unsigned int j)
{
	stack_t *current;

	if (*h)
	{
		current = *h;

		if (current->next)
		{
			current->next->n = current->next->n - current->n;
			current->next->prev = NULL;
			*h = current->next;
			current->next = NULL;
			free(current);
		}
		else
		{
			fprintf(stderr, "L%d: can't sub, stack too short\n", j);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", j);
		exit(EXIT_FAILURE);
	}
}
