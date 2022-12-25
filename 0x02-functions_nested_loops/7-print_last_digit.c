#include "main.h"
/**
 *print_last_digit - this program print the last digit of a number
 *@n: checks for the function
 *Return: returns the last digit
 */
int print_last_digit(int n)
{
int digit;
if (n < 0)
digit = -1 * (n % 10);
else
digit = n % 10;
_putchar(digit + '0');
_putchar ('\n');
return (digit);
}
