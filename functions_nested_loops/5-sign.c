#include "main.h"

/**
 * print_sign - Start Point
 *
 * Return: checks if its greater, less or equal to zero
 *
 * @n: The number in questions
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
