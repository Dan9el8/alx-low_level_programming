#include "main.h"

/**
*_strchr - a fuction that locate a character in a string
*@c: occurance of a character
*@s: occurance of a string
*
*Return: character located in a string
*/

char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
