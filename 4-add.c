#include "monty.h"

/**
 * add - function that adds the top two elements of the stack.
 * @stack: pointer to the head of the stack.
 * @line_number: Current line number.
 */
void add(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
ffree(*stack);
exit(EXIT_FAILURE);
}

(*stack)->next->n += (*stack)->n;
pop(stack, line_number);
}
