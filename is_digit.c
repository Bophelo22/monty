#include "monty.h"
/**
 * is_digit - function that chechks if a string represents an integer.
 * @str: The string to be checked.
 * Return: 1 if the string is an integer, 0 otherwise.
 */
int is_digit(char *str)
{
int i = 0;
if (str[i] == '-')
{
i++;
}
while (str[i] != '\0')
{
if (!isdigit(str[i]))
{
return (1);
}
i++;
}

return (0);
}
