#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - The last digit
 *@void: Empty parameter list for main.
 *
 *Description: Prints last digit of random number and tells
 *if it is greater than 5, 0, or less than 6 and not 0.
 *
 *Return: 0 for success
 */
int main(void)
{

int n;
int m;

srand(time(0));

n = rand() - RAND_MAX / 2;
m = n % 10;

if (m > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, m);
}
else if (m == 0)
{
printf("Last digit of %i is %i and is 0\n", n, m);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);
}
return (0);
}
