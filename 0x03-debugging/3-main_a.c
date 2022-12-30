#include "..main.h"
/**
*main - takes a date and prints how many days are left in a year taking
*leap years into account
*Return: 0
*/
int main(void)
{
int year;
int month;
int day;
month = 4;
day = 01;
year = 1997;
printf("Date: %02d/%02d/%04d\n", month, day, year);
day = convert_day(month, day);
print_remaining_days(month, day, year);
return (0);
}
