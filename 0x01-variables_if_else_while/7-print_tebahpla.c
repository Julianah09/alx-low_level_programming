#include <stdio.h>

/**
* main - Reserve alphabet program
* Return: returns
*/
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');
return (0);
}
