//
//      Chapter 1 Ex 1-12
//
// Print 1 word per line
//
#include<stdio.h>

#define IN 0
#define OUT 1

int main()
{
	int c;
	int state = OUT;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;	
		}
		else if (state == OUT)
		{
		    state = IN;
			putchar('\n');
			putchar(c);
		}
		else
		{
			putchar(c);
		}
	}
	
	return 0;
}

