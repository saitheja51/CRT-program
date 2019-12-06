#include<stdio.h>
main()
{
	int n;
	printf("\n enter the number:");
	scanf("%d",&n);
	if (n>0)
	{
	    printf("\n %d is positive",n);
    }
   else if(n<0)
    {
    	printf("\n %d is negative",n);
	}
    else {
	printf("is zero");
	}
	}
