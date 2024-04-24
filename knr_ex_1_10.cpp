//
//      Chapter 1 Ex 1-10
//
// Replace tab by \t, backspace by \b abd backslash by \\
//

#include<iostream>
#include<stdio.h>

int main()
{

	int c;
	
	printf("Input some characters, when you finishes, press Ctrl+D.\n");

	while ((c = getchar()) != EOF)
	{
		if (c == '\b')		// doesn't get recorded to the stdin?
		{
			putchar('\\');
			putchar('b');
		}
		else if (c == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		else if (c == '\\')
		{
			putchar('\\');
			putchar('\\');
		}
		else
		{
			putchar(c);
		}
	}

	return 0;
}
