#include "main.h"

/**
*_strcpy - Copy a string
*@dest: Destination value
*@src: Source value
*Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)

{
int len = 0;

while (*(src + len) != '\0')
{
*(dest + len) = *(src + len);
len++;
}
*(dest + len) = '\0';
return (dest);
}
