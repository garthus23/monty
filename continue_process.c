#include "monty.h"

/**
 * clean_array - reset array values
 * Return: 0 on succeed
**/

int clean_array(void)
{
	if (arr[0])
		arr[0][0] = '\0';
	if (arr[1])
		arr[1][0] = '\0';
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

	arr = malloc(sizeof(char *) * 3);
	if (!arr)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	fptr = fopen(argv[1], "r");
	if (fptr != NULL)
	{
		for (i = 0; i < 3; i++)
			arr[i] = NULL;
		c = fgetc(fptr);
		while (c != EOF)
		{
			string_from_line(fptr, buff, &c);
			j++;
			string_to_array(*buff, h, j, fptr);
			call_opcode(&h, j, fptr);
			c = fgetc(fptr);
			clean_array();
		}
		fclose(fptr);
		free_all(arr, h);
	}
	else
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		free(arr);
		exit(EXIT_FAILURE);
	}
	return (0);

}
