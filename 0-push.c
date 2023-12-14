#include "monty.h"

/**
 * push - function that pushes an element to the stack.
 * @stack: pointer to the head of the stack.
 * @line_number: current line number
 */

void push(stack_t **stack, unsigned int line_number)
{
stack_t *new_node;

if (!argument || is_digit(argument) == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
ffree(*stack);
exit(EXIT_FAILURE);
}

new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
free(new_node);
ffree(*stack);
exit(EXIT_FAILURE);
}

new_node->n = atoi(argument);
new_node->prev = NULL;
new_node->next = *stack;

if (*stack != NULL)
(*stack)->prev = new_node;

*stack = new_node;
}
