#include "main.h"

/**
 * print_alphabet_x10 - Start Point
 *
 * Return: Remain in void
 */
void print_alphabet_x10(void)
{
char x;
int y = 1;

while (y < 11)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
y++;
}
}
