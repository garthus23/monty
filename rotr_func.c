#include "monty.h"

/**
 * rotr_func - put the tail in the head
 * @h: a doubly linked list
 * @j: a line of the file
 * Return: None
**/

void rotr_func(stack_t **h, unsigned int j)
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

		current->prev = last;
		last->prev->next = NULL;
		last->next = current;
		last->prev = NULL;
		*h = last;
	}

}
