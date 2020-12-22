#include "monty.h"

char **arr;

/**
 * string_from_line - create a string from a line in a file
 * @fptr: pointer on file
 * @buff: a buffer string
 * @c: char to add to buff
 * Return: 0 when it works
**/

int string_from_line(FILE *fptr, char **buff, char *c)
{
	int i = 0;

	while (*c != '\n')
	{
		(*buff)[i] = *c;
		*c = fgetc(fptr);
		i++;
	}
	(*buff)[i] = '\0';
	return (0);
}

/**
 * main - manipulate the stacks
 * @argc: number of args
 * @argv: arguments
 * Return: 0 when it works
**/

int main(int argc, char **argv)
{
	int i = 0, j = 0;
	char c, *buff;
	stack_t *h = NULL;
	FILE *fptr = NULL;


	buff = malloc(sizeof(char) * 256);
	if (argc == 2)
	{
		fptr = fopen(argv[1], "r");
		if (fptr != NULL)
		{
			arr = malloc(sizeof(char *) * 3);
			for (i = 0; i < 3; i++)
				arr[i] = NULL;
			c = fgetc(fptr);
			while (c != EOF)
			{
				string_from_line(fptr, &buff, &c);
				j++;
				string_to_array(arr, buff);
				call_opcode(&h, j);
				c = fgetc(fptr);
			}
			fclose(fptr);
			free(buff);
			free_arr(arr);
			free_dlistint(h);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", j);
		free(buff);
		exit(EXIT_FAILURE);
	}
	return (0);
}
