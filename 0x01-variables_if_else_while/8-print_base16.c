#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 is success
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
