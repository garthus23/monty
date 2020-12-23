#include "monty.h"

char **arr;

/**
 * free_all - free all var malloc'ed
 * @buff: the buffer
 * @arr: the 2D Array
 * @h: the doubly linked list
 * Return: 0 when it works
**/

int free_all(char *buff, char **arr, stack_t *h)
{
	free(buff);
	free_arr(arr);
	free_dlistint(h);
	return (0);
}


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
 * continue_process - function used to continue
 * @argv: a file
 * @buff: a string, line of a file
 * Return: 0 when it works
**/

int continue_process(char **argv, char **buff)
{
	int i = 0, j = 0;
	char c;
	stack_t *h = NULL;
	FILE *fptr = NULL;

	fptr = fopen(argv[1], "r");
	if (fptr != NULL)
	{
		arr = malloc(sizeof(char *) * 3);
		if (!arr)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		for (i = 0; i < 3; i++)
			arr[i] = NULL;
				c = fgetc(fptr);
		while (c != EOF)
		{
			string_from_line(fptr, buff, &c);
			j++;
			string_to_array(arr, *buff);
			call_opcode(&h, j);
			c = fgetc(fptr);
		}
		fclose(fptr);
		free_all(*buff, arr, h);
	}
	else
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
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
	char *buff;

	buff = malloc(sizeof(char) * 256);
	if (!buff)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (argc == 2)
	{
		continue_process(argv, &buff);
	}
	else
	{
		fprintf(stderr, "USAGE: monty file\n");
		free(buff);
		exit(EXIT_FAILURE);
	}
	return (0);
}
