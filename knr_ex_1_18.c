//
//      Chapter 1 Ex 1-18
//
// Remove trailing blanks and tabs from input line, and delete blank line
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

void trimline(char line[])
{
    int i = 0;
    int index = 0;
    printf("\n-- %s --", line);
    while(line[i] != '\0')
    {
        if (line[i] != ' ' && line[i] != '\t')
        {
            index = i;
        }
        i++;
    }
    if (index != i)
    {
        line[index + 1] = '\0';
    }
    printf("\n-- %s --", line);
}

int main()
{
    int len = 0;
    char line[MAXLINE];

    while ((len = getLine(line)) > 0)
    {
        if (len == 1 && line[0] == '\n')
            continue;
        else
        {
            trimline(line);
            printf("\n%s", line);
        }
    }

    return 0;
}

