#include "monty.h"


int call_opcode(stack_t **h , unsigned int j)
{
	int i = 0;
	int k = 0;
	extern char **arr;

	instruction_t cases [] = {
 		{"push", push_func}, {"pall", pall_func},
		{"pint", pint_func}, {"pop", pop_func},
		{NULL, NULL}};

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
			cases[i].f(h, j);
		k = 0;
		i++;
	}
	return (0);
}
