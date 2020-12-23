#include "monty.h"

/**
 * exit_push_int - exit the push int fonction
 * @h: a doubly linked list
 * @j: line of the opened file
 * @fptr: pointer on open file
 * Return: 1 when there is one
**/
int exit_push_int(stack_t *h, int j, FILE *fptr)
{
	fprintf(stderr, "L%d: usage: push integer\n", j);
	free_all(arr, h);
	fclose(fptr);
	exit(EXIT_FAILURE);
}



/**
 * push_int - verify if there is a number to add
 * @h: a doubly linked list
 * @j: line of the opened file
 * @fptr: pointer on open file
 * Return: 1 when there is one
 **/
int push_int(stack_t *h, int j, FILE *fptr)
{
	int i = 0, push = 1;
	char str[] = "push";

	for (i = 0; arr[0][i] != '\0'; i++)
	{
		if (arr[0][i] != str[i])
		{
			push = 0;
			break;
		}
	}
	i = 0;
	if ((push == 1 && !arr[1]) || (push == 1 && arr[1][0] == '\0'))
	{
		if (arr[0][0] != '\0')
		{
			exit_push_int(h, j, fptr);
		}
	}

	i = 0;
	if (arr[1])
	{
		if (arr[1][0] == '-')
			i++;
		for (; arr[1][i] != '\0'; i++)
		{
			if (isdigit(arr[1][i]) == 0)
			{
				exit_push_int(h, j, fptr);
			}
		}
		return (1);
	}
	return (0);
}
