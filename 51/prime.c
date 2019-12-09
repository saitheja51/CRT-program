#include<stdio.h>
main()
{
	int i,n,count=0;
	printf("\n enter a no :");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==1)
		printf("\n prime no");
	else
	    printf("\n not a prime no");
	}

