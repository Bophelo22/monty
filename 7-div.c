#include "monty.h"

/**
 * ddiv - function that divides the second top element by the
 * top element of the stack.
 * @stack: pointer to the head of the stack.
 * @line_number: Current line number.
 */
void ddiv(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
ffree(*stack);
exit(EXIT_FAILURE);
}

if ((*stack)->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number);
ffree(*stack);
exit(EXIT_FAILURE);
}

(*stack)->next->n /= (*stack)->n;
pop(stack, line_number);
}
