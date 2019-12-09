#include<stdio.h>
main()
{
	int n,r,sum=0;
	printf("\n enter the vehicle no");
	scanf("%d",&n);
	test :
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(sum<10)
	 printf("\n lucky number %d",sum);
	else
	{
	 n=sum;
	 sum=0;
	 goto test;
	}
}
