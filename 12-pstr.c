#include "monty.h"
/**
 * pstr - Prints the string starting at the top of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Current line number.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;

(void)line_number;

if ((stack == NULL) || (*stack == NULL))
{
printf("\n");
}
else
{
while (current != NULL)
{
if ((current->n > 0) && current->n > 0 &&
current->n < 127)
{
printf("%c", current->n);
current = current->next;
}
else
{
break;
}
}
printf("\n");
}
}
