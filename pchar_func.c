#include "monty.h"

/**
 * pchar_func - print the char at the head
 * @h: doubly linked list
 * @j: a line in the file
 * Return: Nothing
**/

void pchar_func(stack_t **h, unsigned int j)
{
	stack_t *current;
	int c;

	if (*h)
	{
		current = *h;
		c = current->n;

		if (c >= 0 && c <= 127)
		{
			printf("%c\n", current->n);
		}
		else
		{
			fprintf(stderr, "L%d: can't pchar, value out of range\n", j);
			free_all(arr, *h);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", j);
		free_all(arr, *h);
		exit(EXIT_FAILURE);
	}
}
