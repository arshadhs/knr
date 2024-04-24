//
//      Chapter 1 Ex 1-15
//
// Temperature
//
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

#define TRUE 1
#define FALSE 0

float getCelsius(float f)
{
	float c = (f - 32.0) * 5.0/9.0;
	return c;
}

float getFarenhite(float c)
{
	float f = (c*9.0/5.0) + 32;
	return f;
}

int main()
{
	bool more = TRUE;
	while(more)
	{
        char tempA;
		printf("\nDo you want to enter Celsius or Farenhite? (c/f)?");
		scanf(" %c", &tempA);

        float temp;
        printf("Enter temperature...");
        scanf(" %f", &temp);

		if ('c' == tolower(tempA))
		{
            printf("\n%f C is %f F", temp, getFarenhite(temp));  
        }
        else
        {
            printf("\n%fF is %fC", temp, getCelsius(temp));  
        }

	    char moreA;
		printf("\nDo you want to convert temperature? (y/n)?");
		scanf(" %c", &moreA);

		if ('y' != tolower(moreA))
		{
			more = FALSE;
        }
    }

    return 0;
}
