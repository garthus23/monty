#include "monty.h"

/**
 * push_func - add an int to the head
 * @h: a double linked list
 * @j: an int
 * Return: nothing
**/

void push_func(stack_t **h, unsigned int j)
{
	stack_t *new;
	(void)j;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
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
