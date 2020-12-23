#include "monty.h"

/**
 * pint_func - print the head of a function
 * @h: a double linked list
 * @j: the line in the file
 * Return : Nothing
**/

void pint_func(stack_t **h, unsigned int j)
{
	if (*h)
	{
		printf("%d\n", (*h)->n);
	}
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", j);
		exit(EXIT_FAILURE);
	}
}
