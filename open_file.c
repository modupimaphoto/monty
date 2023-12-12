#include "monty.h"

/**
 * open_file - open a file
 *
 * @argv: Array of arguments passed to the program
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int open_file(char *filename)
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;
	stack_t *stack = NULL;
	instruction_t instruction;

	file = fopen(filename, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &len, file) != -1)
	{
		line_number++;
		instruction = get_instruction(line, line_number);
		if (instruction.opcode == NULL)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, line);
			free(line);
			free_stack(stack);
			fclose(file);
			exit(EXIT_FAILURE);
		}
		if (strcmp(instruction.opcode, "push") == 0)
		{
			if (instruction.arg == NULL || !is_integer(instruction.arg))
			{
				fprintf(stderr, "L%u: usage: push integer\n", line_number);
				free(line);
				free_stack(stack);
				fclose(file);
				exit(EXIT_FAILURE);
			}
			push(&stack, atoi(instruction.arg));
		}
		else if (strcmp(instruction.opcode, "pall") == 0)
		{
			pall(stack);
		}
		else if (strcmp(instruction.opcode, "pint") == 0)
		{
			pint(stack, line_number);
		}
		else if (strcmp(instruction.opcode, "pop") == 0)
		{
			pop(&stack, line_number);
		}
		else if (strcmp(instruction.opcode, "swap") == 0)
		{
			swap(&stack, line_number);
		}
		else if (strcmp(instruction.opcode, "add") == 0)
		{
			add(&stack, line_number);
		}
		else if (strcmp(instruction.opcode, "nop") == 0)
		{
			/* Do nothing */
		}
		else
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, line);
			free(line);
			free_stack(stack);
			fclose(file);
			exit(EXIT_FAILURE);
		}
	}
	free(line);
	free_stack(stack);
	fclose(file);
	return (EXIT_SUCCESS);
}
