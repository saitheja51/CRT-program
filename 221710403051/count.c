#include<stdio.h>
main()
{
	int n,r,count=0;
	printf("\n enter n value :");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
	    count++;
		n=n/10;
	}
	printf("\n sum of digits : %d",count);
	}
