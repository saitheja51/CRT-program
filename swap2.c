#include<stdio.h>
main()
{
	int a,b;
	printf("\n enter two values:");
	scanf("%d%d",&a,&b);
	printf("\n Before swap a=%d \t b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
	printf("\n After swap a=%d \t b=%d",a,b);
}
