#include <stdio.h>

/**
 * main - print alphabet in lowercase and uppercase.
 *
 * Return: 0
 */
int main(void)
{
char ch;
char CH;

for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
for (CH = 'A'; CH <= 'Z'; CH++)
	putchar(CH);
putchar('\n');
return (0);
}
