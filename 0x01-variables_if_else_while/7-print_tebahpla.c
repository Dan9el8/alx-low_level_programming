#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Prints the lowercase alphabet in reverse.
 *Description prints all single digit number of base 10
 *starting from 0 followed by a new line
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
