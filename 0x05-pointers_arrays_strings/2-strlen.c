#include "main.h"



/**

 * Main - return the length of the string

 * Description: char type pointer

 * Return: c

 */



int _strlen(char *s)

{

	int c;



	for (c = 0; s[c] != '\0'; c++)

		;



	return (c);

}
