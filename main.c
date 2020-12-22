#include "monty.h"


int main(int argc, char** argv)
{
	int i, j;
	char c;
	char buff[256];
	extern char **arr;
	stack_t *h = NULL;
	FILE *fptr = NULL;

	j = 0;
	if (argc == 2)
	{
		if ((fptr = fopen(argv[1],"r")) != NULL)
		{
			arr = malloc(sizeof(char*) * 3);		
			for (i = 0; i < 3; i++)
				arr[i] = NULL;
			c = fgetc(fptr); 
			while (c != EOF)
			{

				i = 0;
				while (c != '\n')
				{
					buff[i] = c;
					c = fgetc(fptr);
					i++;
				}
				buff[i] = '\0';
				j++;
/*				for (i = 0; i < 3; i++) 
				{
					if (arr[i])
						free(arr[i]);
					arr[i] = NULL;
				}
*/				string_to_array(arr, buff);
				call_opcode(&h, j);
				c = fgetc(fptr);
			}
			fclose(fptr); 
			free_arr(arr);
			free_dlistint(h);
		}
		else
		{
			printf("On arrive pas a ouvrir ton fichier\n");
		}
	}	
	return (0);
}
