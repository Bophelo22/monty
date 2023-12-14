#include "monty.h"

/**
 * comment - function that handles comments in Monty bytecode.
 * @line: Line of Monty bytecode to check for comments.
 * Return: 1 if the line is a comment, 0 otherwise.
 */
int comment(const char *line)
{
/* Skip leading whitespaces */
while (*line == ' ' || *line == '\t')
{
line++;
}

/* Check if the line starts with '#' (comment) or is empty */
if (*line == '#' || *line == '\n' || *line == '\0')
{
return (1);
}

return (0);
}
