
0;276;0c#include <stdio.h>

/**
 * main - Start point
 *
 * Return: Remain 0
 */
int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
if (i != 'e' && i != 'q')
putchar(i);
}
putchar('\n');
return (0);
}
