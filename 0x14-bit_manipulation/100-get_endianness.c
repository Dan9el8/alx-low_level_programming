#include "main.h"

/**
*get_endianness - function that check if machine is little or big
*Return: 0for big and1 for little
*/

int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;

return (*c);
}
