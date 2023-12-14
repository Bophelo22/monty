#include "monty.h"

/**
 * sub - function that subtracts the top element from the second
 * top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Current line number.
 */
void sub(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
ffree(*stack);
exit(EXIT_FAILURE);
}

(*stack)->next->n -= (*stack)->n;
pop(stack, line_number);
}
