#include <stdio.h>

int main()
{
    int current;
    long whitespaceCount = 0;
    while ((current = getchar()) != EOF)
    {
        if (current == '\t')
        {
            printf("Tab");
            whitespaceCount++;
        }
        if (current == '\n')
        {
            printf("Newline");
            whitespaceCount++;
            break;
        }
        if (current == ' ')
        {
            printf("Space");
            whitespaceCount++;
        }
    }
    printf("Whitespace count: %ld", whitespaceCount);
}
