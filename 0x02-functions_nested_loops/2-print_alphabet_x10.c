#include "main.h"
/**
*main - print functions nested loops
*Description: nested loops
*Return: Always 0 success
*/
void print_alphabet_x10(void)
{
int line, ch;
for (line = 0; line <= 9; ++line)
{
for (ch = 'a'; ch <= 'z'; ++ch)
_putchar(ch);
_putchar('\n');
}
}
