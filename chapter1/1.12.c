#include <stdio.h>

// write a program that prints the input one word per line
int main()
{
    int c;
    char prev = '\n';
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (prev != '\n')
            {
                putchar('\n');
                prev = c;
            }
        }
        else
        {
            putchar(c);
            prev = c;
        }
    }
}