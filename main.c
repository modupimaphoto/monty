#include "monty.h"

/**
 * main - entry point
 *
 * @argc: Number of argument passed to the program
 * @argv: Array of arguments passed to the program
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int main(int argc, char **argv)
{
	char *filename = argv[1];

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	open_file(filename);
}
