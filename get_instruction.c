#include "monty.h"

/**
 * get_instruction - Parses a line of Monty bytecode and
 * returns the corresponding instruction
 *
 * @line: Line of Monty bytecode to parse
 * @line_number: Line number of the instruction
 *
 * Return: Instruction corresponding to the line of Monty bytecode
 */
instruction_t get_instruction(char *line, unsigned int line_number)
{
	instruction_t instruction;
	char *opcode, *arg;

	opcode = strtok(line, " \t\n");
	if (opcode == NULL || opcode[0] == '#')
	{
		instruction.opcode = NULL;
		return (instruction);
	}
	arg = strtok(NULL, " \t\n");
	instruction.opcode = opcode;
	instruction.arg = arg;
	instruction.line_number = line_number;
	return (instruction);
}
