#include "monty.h"

/**
 * swap - function that swaps the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Current line number.
 */
void swap(stack_t **stack, unsigned int line_number)
{
stack_t *temp;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
ffree(*stack);
exit(EXIT_FAILURE);
}

temp = (*stack)->next;
(*stack)->next = temp->next;
if (temp->next != NULL)
temp->next->prev = *stack;
temp->prev = NULL;
temp->next = *stack;
(*stack)->prev = temp;
(*stack) = temp;


}
