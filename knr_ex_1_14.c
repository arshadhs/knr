//
//      Chapter 1 Ex 1-1r43
//
// Count characters and draw histogram (horzontal)
//
#include<stdio.h>

#define MAX 26

void drawHorizontal(int digits[])
{
	int i;
	int count;

	for (i = 0; i < MAX; i++)
	{
		printf("\n[%c] ", (char)(i + 'a'));
		for (count = 0; count < digits[i]; count++)
		{
			printf("|");
		}
	}
}

int main()
{
	int c;
	int ws = 0;
	int charCount = 0;
	int digits[MAX] = {0};

	while ((c = getchar()) != EOF)
	{
		if ( c >= 'a' && c <= 'z')
		{
			digits[c - 'a']++;
		}
	}

	putchar ('\n');
	drawHorizontal(digits);
	putchar ('\n');

	return 0;
}
