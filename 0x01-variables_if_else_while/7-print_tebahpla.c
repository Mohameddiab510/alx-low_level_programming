#include<stdio.h>

/**
 * main - entre point
 *
 * Descripion: false or true validation
 *
 * Return:0(seccess)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
