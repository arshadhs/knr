//
//	Chapter 1 Ex 1-9
//
// Copy input to output, replace string of 1 or more blanks with single blank
//
#include<stdio.h>

int main()
{
	int c;
	int lastChar = 0;

    printf("Input some characters, when you finishes, press Ctrl+D.\n");

	while ((c = getchar()) != EOF)
	{
		if ((lastChar == ' ') && (c == ' '))
		{
		}
		else
		{
			putchar(c);
		}
		lastChar = c;
	}
	return 0;
}
