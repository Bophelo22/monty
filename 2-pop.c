#include "monty.h"

/**
 * pop - function to remove the top element of the stack.
 * @stack: pointer to the head of the stack.
 * @line_number: Current line number.
 */
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *temp;

if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
ffree(*stack);
exit(EXIT_FAILURE);
}

temp = *stack;
*stack = (*stack)->next;
if (*stack != NULL)
(*stack)->prev = NULL;

free(temp);

}
