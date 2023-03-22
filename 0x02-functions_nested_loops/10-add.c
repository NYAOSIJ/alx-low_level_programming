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
   int num1, int num2, int num3;
  
   num3 = sum(num1, num2);
  putchar(num3);
   return 0;
}
