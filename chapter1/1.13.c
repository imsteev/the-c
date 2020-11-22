#include <stdio.h>

#define HORIZONTAL 0
#define VERTICAL 1

#define IN 2
#define OUT 3

#define MAX_WORD_LENGTH 30

// write a program that prints a histogram of the length of words in the input
int main()
{
	// most words in the English language are <= 30 characters long
	int word_lengths[MAX_WORD_LENGTH];
	int c, cur_len, state;

	cur_len = 0;
	state = OUT;

	for (int k = 0; k < MAX_WORD_LENGTH; k++)
	{
		word_lengths[k] = 0;
	}
	// 1. loop through each character of input
	// 2a. If a character is seen and state == IN, increment the current word length
	// 2b. If a character is seen and state == OUT, set word length to 1
	//  3. If a character is not seen, state = OUT, set word_lengths[current_length]++;
	//  4. Finally, at the end, loop through every word length and print the lengths

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (state == IN)
			{
				word_lengths[cur_len]++;
			}
			state = OUT;
			cur_len = 0;
		}
		else
		{
			cur_len++;
			state = IN;
		}
	}
	printf("%12s\n", "Word Length");
	for (int i = 0; i < MAX_WORD_LENGTH; i++)
	{
		printf("%12d ", i);
		for (int j = 0; j < word_lengths[i]; j++)
		{
			putchar('x');
		}
		printf("\n");
	}
}
