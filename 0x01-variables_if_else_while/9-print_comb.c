#include "holberton.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
README.md int rone, cone, d;

README.md for (rone = 0; rone <= 9; rone++)
README.md {
README.md README.md _putchar(0);
README.md README.md _putchar(,);
README.md README.md _putchar( );
README.md README.md for (cone = 1; cone <= 9; cone++)
README.md README.md {
README.md README.md README.md d = (rone * cone);
README.md README.md README.md if ((d / 10) > 0)
README.md README.md README.md {
README.md README.md README.md README.md _putchar((d / 10) + 0);
README.md README.md README.md }
README.md README.md README.md else
README.md README.md README.md {
README.md README.md README.md README.md _putchar( );
README.md README.md README.md }
README.md README.md README.md _putchar((d % 10) + 0);

README.md README.md README.md if (cone < 9)
README.md README.md README.md {
README.md README.md README.md README.md _putchar(,);
README.md README.md README.md README.md _putchar( );
README.md README.md README.md }
README.md README.md }
README.md README.md _putchar(n);
README.md }

}
