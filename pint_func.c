#include "monty.h"

void pint_func(stack_t **h, unsigned int j)
{
	if (*h)
		printf("%d\n", (*h)->n);
}
