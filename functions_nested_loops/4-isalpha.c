#include "main.h"

/**
 * _isalpha - Start Point
 *
 * Return: checks if it is lowercase and uppercase
 *
 * @c: The character is questions
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
