#include<stdio.h>
main()
{
	int a,b;
	printf("\n enter two values");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("\n a is big");
	else if(b>a)
	printf("\n b is big");
	else
	printf("\n both are equal");
}
