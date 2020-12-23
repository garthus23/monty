#include "monty.h"

/**
 * pop_func - remove the top element
 * @h: a doubly linked list
 * @j: a line number
 * Return: Nothing
**/

void pop_func(stack_t **h, unsigned int j)
{
	stack_t *current;

	current = *h;
	if (*h)
	{
		if (current->next)
		{
			*h = current->next;
			current->next->prev = NULL;
			current->next = NULL;
			free(current);
		}
		else
		{
			free(*h);
			*h = NULL;
		}

	}
	else
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", j);
		exit(EXIT_FAILURE);
	}
}
