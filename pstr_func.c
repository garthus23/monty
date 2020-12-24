#include "monty.h"

/**
 * pstr_func - print all the char in a Doubly linked list
 * @h: a doubly linked list
 * @j: a line in a file
 * Return: None
**/

void pstr_func(stack_t **h, unsigned int j)
{
	stack_t *current;
	(void)j;

	if (*h)
	{
		current = *h;

		for (; current != NULL; current = current->next)
		{
			if ((current->n) > 0 && (current->n) <= 127)
			{
				printf("%c", current->n);
			}
			else
			{
				printf("\n");
				exit(0);
			}
		}
		printf("\n");
	}
	else
	{
		printf("\n");
	}
}
