#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("\n enter a no :");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
		printf("\n perfect number");
	else
	    printf("\n not a perfect no");
	}

