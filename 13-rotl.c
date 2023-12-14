#include "monty.h"

/**
 * rotl - function that rotates the stack to the top.
 * @stack: pointer to the head of the stack.
 * @line_number: Current line number.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
stack_t *last = *stack;

(void)line_number;

if (current == NULL || current->next == NULL)
return;

while (last->next)
last = last->next;

last->next = current;
current->prev = last;
*stack = current->next;
current->next = NULL;
(*stack)->prev = NULL;
}
