#include "main.h"

/*
*_puts_recusion - prints a string
*@: input
*Return: Always 0 on (success)
*/

void _puts_recursions(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
