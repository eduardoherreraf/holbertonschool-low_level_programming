#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 **/
int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
		putchar(ch);
	for (ch = 'a' ; ch <= 'f' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
