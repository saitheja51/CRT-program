#include<stdio.h>
void main()
{
	int n;
	printf("\n enter a number");
	scanf("%d",&n);
	if(0<=n && n<10)
	 printf("\n one digit");
  else if(n<100)
	 printf("\n two digits");
  else if(n<1000)
 	printf("\n three digits");
  else
 	printf("\n four digit");
}
