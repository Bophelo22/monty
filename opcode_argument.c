#include "monty.h"

/**
 * opcode_argument - function that extracts the opcode and argument
 * from a line of input.
 * @buffer: Line of input containing the opcode and argument.
 * @opcode: Pointer to stored code the extracted opcode.
 *
 * Return: 1 on success, 0 if opcode is empty or a comment.
 */
int opcode_argument(char *buffer, char **opcode)
{
argument = NULL;
*opcode = strtok(buffer, " \t\n");

if (*opcode == NULL || (*opcode)[0] == '#')
{
return (0);
}
argument = strtok(NULL, " \t\n");
return (1);
}
