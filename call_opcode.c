#include "monty.h"

/**
 * err_call_opt - failure function to exit
 * @h: a doubly linked list
 * @j: a line in the file
 * @fptr: a file
 * Return: Nothing
**/

void err_call_opt(stack_t *h, unsigned int j, FILE *fptr)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", j, arr[0]);
	free_all(arr, h);
	pclose(fptr);
	exit(EXIT_FAILURE);
}



/**
 * call_opcode - call the right function from the line
 * @h: a doubly linked list
 * @j: a line in the file
 * @fptr: a file
 * Return: 0 when it works
**/

int call_opcode(stack_t **h, unsigned int j, FILE *fptr)
{
	int i = 0, k = 0;

	instruction_t cases[] = {
		{"push", push_func}, {"pall", pall_func}, {"swap", swap_func},
		{"pint", pint_func}, {"pop", pop_func}, {"add", add_func},
		{"nop", nop_func}, {"sub", sub_func}, {"div", div_func},
		{"mul", mul_func}, {"mod", mod_func}, {"pchar", pchar_func},
		{"pstr", pstr_func}, {"rotl", rotl_func}, {"rotr", rotr_func},
		{NULL, NULL}};

	if (arr[0][0] == '\0' || arr[0][0] == '#')
	{
		return (0);
	}
	while (cases[i].opcode)
	{
		while (*(cases[i].opcode) != '\0')
		{
			if (arr[0][k] != *(cases[i].opcode))
			{
				break;
			}
			k++;
			cases[i].opcode++;
		}
		if (arr[0][k] == *(cases[i].opcode))
		{
			cases[i].f(h, j);
			break;
		}
		k = 0;
		i++;
	}
	if (cases[i].opcode == NULL)
	{
		err_call_opt(*h, j, fptr);
	}
	return (0);
}
