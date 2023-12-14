#include "monty.h"

/**
 * mul - function that multiplies the second top element of the stack
 * with the top element.
 * @stack: pointer to the head of the stack.
 * @line_number: Current line number.
 */
void mul(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
ffree(*stack);
exit(EXIT_FAILURE);
}

(*stack)->next->n *= (*stack)->n;
pop(stack, line_number);
}
