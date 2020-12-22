#include "monty.h"

void swap_func(stack_t **h, unsigned int j)
{
	stack_t *current;
	int tmp;
	

	if (*h)
		current = *h;

	if (current->next != NULL)
	{
		current = current->next;
		tmp = current->n;
		current->n = current->prev->n;
		current->prev->n = tmp;
	}

}
