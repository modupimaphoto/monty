#include "monty.h"

/**
 * pall - Prints all the values on the stack
 *
 * @stack: Pointer to the stack
 *
 * Return:  Nothing.
 */
void pall(stack_t *stack)
{
	while (stack != NULL)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}
