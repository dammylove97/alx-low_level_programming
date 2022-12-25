#include "main.h"
/**
 *_isalpha -  checks for alphabetic characters
 *@c: checks for function
 *Return: returns 1 if 'c' is alphabetic
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
return (0);
}
