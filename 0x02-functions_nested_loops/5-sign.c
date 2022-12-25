#include "main.h"
/**
 *print_sign - print the sign of a number
 *@n: checks the function of the code
 *Return: returns 1 if +, 0 if 0, -1 if -
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43 + 0);
return (1);
}
else if (n == 0)
{
_putchar(0 + 48);
return (0);
}
else
{
_putchar(45 + 0);
return (-1);
}
}
