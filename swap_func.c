#include "monty.h"


/**
 * swap_func - swap two numbers in a list
 * @h: doubly linked list
 * @j: a line in a file
 * Return: None
**/

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
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short", j);
	}

}
