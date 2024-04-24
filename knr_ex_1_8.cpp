#include<iostream>
#include<stdio.h>

int main()
{

	int blank = 0;
	int tab = 0;
	int newline = 0;
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ') blank++;
		if (c == '\t') tab++;
		if (c == '\n') newline++;
	}

	std::cout << "Blank = " << blank << std::endl;
	std::cout << "Tab = " << tab << std::endl;
	std::cout << "NewLine = " << newline << std::endl;
	return 0;
}
