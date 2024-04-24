//
//      Chapter 1 Ex 1-16
//
// Get Longest Line
//
#include<stdio.h>

#define MAXLINE 100

int getLine(char line[])
{
    int c;
    int i;

    for(i = 0; ((c = getchar()) != EOF) && (c != '\n'); i++)
    {
        if (i < MAXLINE - 1)
        {
            line[i] = c;
        }
    }
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}

void copy(char line[], char longest[])
{
    int i = 0;
    while ((longest[i] = line[i]) != '\0')
        i++;
}

int main()
{
    int maxLen = 0;
    int len = 0;

    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getLine(line)) > 0)
    {
        if(len > maxLen)
        {
            maxLen = len;
            copy(line, longest);
        }
    }

    printf ("\nLongest Line: \n%s", longest);
    printf("\nLine length: %d\n", maxLen);
    return 0;
}

