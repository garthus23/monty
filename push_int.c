#include "monty.h"

/**
 * push_int - verify if there is a number to add
 * @buff: a string
 * @h: a doubly linked list
 * @j: line of the opened file
 * @fptr: pointer on open file
 * Return: 1 when there is one
**/
int push_int(char *buff, stack_t *h, int j, FILE *fptr)
{
	int i = 0;

	if (arr[1])
	{
		if (arr[1][0] == '-')
			i++;
		for (; arr[1][i] != '\0'; i++)
		{
			if (isdigit(arr[1][i]) == 0)
			{
				fprintf(stderr, "L%d: usage: push integer\n", j);
				free_all(buff, arr, h);
				fclose(fptr);
				exit(EXIT_FAILURE);
			}
		}
		return (1);
	}
	return (0);
}
