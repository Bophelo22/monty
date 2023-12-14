#include "monty.h"
/**
 * execute_opcode - Executes the corresponding function for an opcode.
 * @opcode: The opcode.
 * @stack: stack
 * @line_number: The line number of the opcode.
 *
 * Return: 1 if opcode is found and executed successfully, 0 otherwise.
 */
int execute_opcode(char *opcode, stack_t **stack, unsigned int line_number)
{
instruction_t instructions[] = {
{"push", push},
{"pall", pall},
{"pint", pint},
{"pop", pop},
{"swap", swap},
{"add", add},
{"nop", nop},
{"sub", sub},
{"div", ddiv},
{"mul", mul},
{"mod", mod},
{"pchar", pchar},
{"pstr", pstr},
{"rotr", rotr},
{"rotl", rotl},
{NULL, NULL}
};

int i = 0;

while (instructions[i].opcode != NULL)
{
if (strcmp(opcode, instructions[i].opcode) == 0)
{
instructions[i].f(stack, line_number);
return (1);
}
i++;
}

fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
exit(EXIT_FAILURE);
}
