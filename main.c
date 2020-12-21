#include "monty.h"


int main(char** argc, char** argv)
{
	int i;
	char c;
	char buf[256];
	FILE *fptr;

	if ((fptr = fopen(argv[1],"r")) != NULL)
	{
		c = fgetc(fptr); 
		while (c != EOF)
		{
			i = 0;
			while (c != '\n')
			{
				buf[i] = c;
				c = fgetc(fptr);
				i++;
			}
			buf[i] = '\0';
			call_opcode(buf);
			c = fgetc(fptr);
		}
		fclose(fptr); 
	}
	else
	{
		printf("On arrive pas a ouvrir ton fichier\n");
	}
	return (0);
}
