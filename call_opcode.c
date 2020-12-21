#include "monty.h"


int call_opcode(stack_t **h , unsigned int j)
{
	int i = 0;
	int k = 0;
	extern char **arr;

	instruction_t cases [] = {
 		{"push", push_func}, {NULL, NULL}};


	while (cases[i].opcode)
	{
		while (*(cases[i].opcode) != '\0')
		{
			if (arr[i][k] != *(cases[i].opcode))
			{
				break;
			}
//			printf("%c", *(cases[i].opcode));
			k++;
			cases[i].opcode++;
		}
		if (arr[i][k] == *(cases[i].opcode))
			cases[i].f(h, j);
//			printf(" OK\n");
		k = 0;
		i++;
	}
	return (0);
}
