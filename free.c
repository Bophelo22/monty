#include "monty.h"
/**
 *  ffree - fucntion to free
 *  @stack: Stack pointer
 *  Return: Void
 */


void ffree(stack_t *stack)
{
if (stack)
{
ffree(stack->next);
free(stack);
}
}
