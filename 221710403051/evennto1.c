#include<stdio.h>
main()
{
	int n;
	printf("enter the n value");
	scanf("%d",&n);
	if(n%2==1)
	n=n-1;
	while(n>=2)
	{
		printf("\n%d",n);
		n-=2;
	}
}
