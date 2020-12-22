#include "monty.h"


void pall_func(stack_t **h, unsigned int j)
{
	unsigned int i;
	stack_t *tmp;

	tmp = *h;
	i = 0;
	for (i = 0; tmp != NULL; tmp = tmp->next)
	{
		printf("%d\n", tmp->n);
		i++;
	}
}
