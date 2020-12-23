#include "monty.h"

/**
 * pall_func - print a doubly linked list
 * @h: the doubly linked list
 * @j: a line in a file
 * Return: Nothing
**/

void pall_func(stack_t **h, unsigned int j)
{
	unsigned int i;
	stack_t *tmp;
	(void)j;

	if (*h)
	{
		tmp = *h;
		i = 0;
		for (i = 0; tmp != NULL; tmp = tmp->next)
		{
			printf("%d\n", tmp->n);
			i++;
		}
	}
}
