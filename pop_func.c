#include "monty.h"


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
}
