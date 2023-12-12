#include "monty.h"

/**
 * add - Adds the top two elements of the stack
 *
 * @stack: Pointer to the stack
 * @line_number: Line number of the instruction
 *
 * Return: Nothing.
 */
void add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}
