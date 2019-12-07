#include<stdio.h>
main()
{
	int a,b,ch;
	printf("\n enter two numbers");
	scanf("%d%d",&a,&b);
	printf("\n 1.Addition \n 2.Subtraction \n 3.Product \n 4.Quotient");
	printf("\n enter your choice");
    scanf("%d",&ch);
  switch(ch)
  {
  	case 1: printf("\n sum is :%d",a+b); break;
  	case 2: printf("\n subtraction is :%d",a-b); break;
  	case 3: printf("\n product is :%d",a+b); break;
 	case 4: printf("\n quotient is :%d",a+b); break;  
  }
}
