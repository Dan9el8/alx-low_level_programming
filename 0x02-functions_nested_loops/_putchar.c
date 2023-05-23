#include <unistd.h>


/**
 * _putchar - writess the charecter c to stdout
 * @C: The character to print
 * Return: On success 1.
 * on error, -1 is returned, and errno is set approprietly
 */

int _putchar(char c)
{
	return (write(1,&c, 1));
}	
