#include<stdio.h>
main()
{
	int n;
	printf("\n enter the number:");
	scanf("%d",&n);
	printf(n>0 ? "positive" : n<0 ? "negative" : "zero");
}
