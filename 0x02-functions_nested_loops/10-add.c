#include <stdio.h>
/* User defined function sum that has two int
 * parameters. The function adds these numbers and
 * return the result of addition.
 */
int sum(int a, int b){
   return a+b;
}
int main()
{
   int  num3;
   
   /*Calling the function*/
   num3 = sum(int a, int b);
   putchar(num3);
   return 0;
}
