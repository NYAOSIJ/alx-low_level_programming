nclude<stdio.h>
/* User defined function sum that has two int
 * parameters. The function adds these numbers and
 * return the result of addition.
 */
void add();                                               //Function Declaration
int main()
{
  add();                                                  //Function Calling
  return 0;
}
/* function definition*/
void add()                                                //Function Definition
{
   int a,b,c;
     c=a+b;
   putchar(c);
}
}
