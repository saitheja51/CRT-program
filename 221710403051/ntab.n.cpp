#include<stdio.h>
main()
{
	int a,n;
	a=1;
	printf("enter the n");
	scanf("%d",&n);
	while(a<=20)
	{
	 printf("\n %d x %d =%d",n,a,a*n);
	 a++;
	}
}
