#include <stdio.h>
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int a)
{
if (a >= 0 && a <= 9)
   return (a);
   else
   {
      a = _abs(a % 10);
  return (a);;
   }
}
