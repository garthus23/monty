#include "monty.h"


void push_func(stack_t **h, unsigned int j)
{
	extern char **arr;
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (new == NULL)
		exit(0);

	new->n = atoi(arr[1]);
	if (*h != NULL)
	{
		new->next = *h;
		(*h)->prev = new;
	}
	else
	{
		new->next = NULL;
	}
	new->prev = NULL;
	*h = new;
}
