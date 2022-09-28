#include "main.h"

/**
 * Main - return the length of the string
 * @*s: char type pointer
 *
 * Description: char type pointer *s
 *              strlen() function calculates the length of the string
 *              pointed to by s
 * 
 * Return: c
 */

int _strlen(char *s)
{
int c;

for (c = 0; s[c] != '\0'; c++)
;
return (c);
}
