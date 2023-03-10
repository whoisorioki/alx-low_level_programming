#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i,result;
	
	result = 1;
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			result *= atoi(argv[i]);
		printf("%d\n", result);
	}
	else
		printf("Error\n");
	return (0);
}
