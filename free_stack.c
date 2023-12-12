#include "monty.h"

/**
 * free_stack - Frees a stack_t stack
 *
 * @stack: Stack to free
 *
 * Return: Nothing.
 */
void free_stack(stack_t *stack)
{
	stack_t *tmp;

	while (stack != NULL)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}
