#include "main.h"

/**
*set_bit - function that sets a bit to nidex of one
*@n: number to change
*@index: index
*
*Return: 1 for success and -1 if not
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
