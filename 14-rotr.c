#include "monty.h"

/**
 * rotr - function that rotates the stack to the bottom.
 * @stack: pointer to the head of the stack.
 * @line_number: Current line number.
 */
void rotr(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
stack_t *last = *stack;

(void)line_number;

if (current == NULL || current->next == NULL)
return;

while (last->next)
last = last->next;

last->prev->next = NULL;
last->prev = NULL;
last->next = current;
current->prev = last;
*stack = last;
}
