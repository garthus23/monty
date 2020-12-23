#include "monty.h"

/**
 * push_int - verify if there is a number to add
 * Return: 1 when there is one
**/
int push_int(void)
{
	int i = 0;

	if (arr[1])
	{
		if (arr[1][0] == '-')
			i++;
		for (; arr[1][i] != '\0'; i++)
		{
			if (isdigit(arr[1][i]) == 0)
				return (0);
		}
		return (1);
	}
	return (0);
}
