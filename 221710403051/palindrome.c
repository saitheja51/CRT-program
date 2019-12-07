#include<stdio.h>
main()
{
	int n,r,sum=0,temp;
	printf("\n enter n value :");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
	    sum=(sum*10)*+r;
		n=n/10;
	}
	if (sum=temp)
	 printf("it is palindrome");
	else
	 printf("it is not a palindrome");
}
