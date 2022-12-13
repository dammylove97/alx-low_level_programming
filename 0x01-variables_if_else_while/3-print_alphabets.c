#include <stdio.h>
/**
 *main - prints lowercase and uppercase alphabets
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
