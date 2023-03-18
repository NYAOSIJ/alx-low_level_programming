 #include <stdio.h>
/**
 * main - prints out the alphabet in lowercase except for qe
 * Return: Always 0.
 */
int main(void)
{
char c;
for (letter = 'a'; letter <= 'z'; letter++)
if (c != 'e' && c != 'q')
putchar(c);
putchar ('\n');
return (0);
}
