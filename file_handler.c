#include "monty.h"
#define BUFFER_SIZE 1024
/**
 * file_handler - function that reads and interprets the Monty bytecode file.
 * @file: File pointer to the Monty bytecode file.
 */
void file_handler(FILE *file)
{
char buffer[BUFFER_SIZE];
unsigned int line_number = 0;
char *opcode;
stack_t *stack = NULL;

while (fgets(buffer, BUFFER_SIZE, file) != NULL)
{
line_number++;

if (!opcode_argument(buffer, &opcode))
continue;


if (!execute_opcode(opcode, &stack, line_number))
exit(EXIT_FAILURE);
}

ffree(stack);
}
