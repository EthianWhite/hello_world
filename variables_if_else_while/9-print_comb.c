#include <stdio.h>

/**
 * main - Start Point
 *
 * Return: Reamin 0
 */
int main(void)
{
int x;

for (x = 0; x <= 9; x++)
{
putchar(x + '0');
if (x != 10)
{
putchar (',');
putchar (' ');
}
}
putchar('\n');
return (0);
}
