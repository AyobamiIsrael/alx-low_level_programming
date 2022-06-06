/*
 * File: 4-print_alphabt.c
 * Auth: Brennan D Baraban
 */

#inlude <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{	
			putchar(ch);
		}
		ch++
	}

	putchar ('\n');

	return (0);
}
