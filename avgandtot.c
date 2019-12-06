#include<stdio.h>
main()
{
	int m,p,c,tot;
	float avg;
	printf("enter the marks in maths,physics,chemistry");
	scanf("%d%d%d",&m,&p,&c);
	tot=m+p+c;
	avg=(float)tot/3;
	printf("\n total marks: %d",tot);
	printf("\n average: %f",avg);
}

