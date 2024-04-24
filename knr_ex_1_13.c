//
//      Chapter 1 Ex 1-13
//
// Count digits and draw a histogram
//
#include<stdio.h>
#define MAX 10
void drawHorizontal(int digits[])
{
	int i;
	int count;

	for (i = 0; i < MAX; i++)
	{
		printf("\n[%d] ", i);
		for (count = 0; count < digits[i]; count++)
		{
			printf("|");
		}
	}
}

int getMaxOfArray(int digit[])
{
	int large = 0;
	int i;
	for (i = 0; i < MAX; i++)
	{
		if (digit[i] > large) large = digit[i];
	}
	return large;
}

void drawVertical(int digits[])
{
	int i;
	int count;

	for (i = 0; i < MAX; i++)
	{
		printf("[%d] ", i);
	}
	putchar ('\n');

	int l = getMaxOfArray(digits);
	for (count = 0; count <= l; count++)
	{
		for (i = 0; i < MAX; i++)
		{
        	if (digits[i] > count)
        	{
        		printf(" |  ");
        	}
			else
			{
        		printf("    ");
			}
        
        	if (i == MAX - 1)
        	{
        		putchar ('\n');
        	}
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
		if ( c >= '0' && c <= '9')
		{
			digits[c - '0']++;
		}
	}

	putchar ('\n');
	drawHorizontal(digits);
	putchar ('\n');
	putchar ('\n');
	drawVertical(digits);

	return 0;
}
