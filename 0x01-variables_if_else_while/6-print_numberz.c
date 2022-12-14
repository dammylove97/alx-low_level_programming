#include <stdio.h>
/**
 *main - print numbers starting from 0 of base 10
 *Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + '0');
++digit;
}
putchar('\n');
return (0);
}
