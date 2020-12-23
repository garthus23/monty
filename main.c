#include "monty.h"

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
