#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack
 *
 * @stack: Pointer to the stack
 * @line_number: Line number of the instruction
 *
 * Return: Nothing.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;
}
