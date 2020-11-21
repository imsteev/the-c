#include <stdio.h>

// Write a program that copys input to output, replacing all whitespace with a single blank
// Hello,              world! I am a       poorly    formatted sentence!
//     -> Hello, world! I am a poorly formatted sentence!
int main()
{

	int c;
	char prev = 'a';
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (prev != ' ')
			{
				putchar(' ');
			}
		}
		else
		{
			putchar(c);
		}
		prev = c;
	}
}
