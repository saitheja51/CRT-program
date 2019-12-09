#include<stdio.h>
main()
{
	int pid,qty,count=0;
	char pname[20],ch='y';
	float price,amount,tamount=0;
	while(ch=='y' || ch=='Y')
	{
		printf("\n enter product id: ");
		scanf("%d",&pid);
		printf("\n enter product name: ");
		scanf("%s",&pname);
		printf("\n enter price: ");
		scanf("%d",&price);
		printf("\n enter quantity: ");
		scanf("%d",&qty);
		amount=qty*price;
		tamount+=amount;
		count++;
	    printf("\n to continue enter[y/n] ");
		fflush(stdin);
		scanf("%c",&ch);
	}
	printf("\n total items purchased :%d ",count);
	printf("\n total bill amount :%f",tamount);
}
