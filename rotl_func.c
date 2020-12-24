#include "monty.h"

/**
 * rotl_func - move the head to tail node
 * @h: a doubly linked list
 * @j: a line in a file
 * Return: None
**/

void rotl_func(stack_t **h, unsigned int j)
{
	stack_t *current;
	stack_t *last;
	(void)j;

	if (*h && (*h)->next)
	{
		current = *h;
		last = *h;

		while (last->next != NULL)
			last = last->next;

		*h = current->next;
		current->next->prev = NULL;
		current->prev = last;
		last->next = current;
		current->next = NULL;
	}
}
