#include<stdio.h>
main()
{
	char K,B,S,F,P;
	int quantity,bill;
	printf("burger-B,Sandwich-S,french fries-F,Pizza-P\n");
	scanf("%c",&K);
	switch(K)
	{
		case'B': printf("no of burgers ordered\n");
		         printf("enter the quantity\n");
		         scanf("%d",&quantity);
		         bill=(quantity*200);
		         printf("cost of burgers ordered %d\n",bill);
		         break;
		case'S': printf("no of sandwiches ordered\n");
		         printf("enter the quantity\n");
		         scanf("%d",&quantity);
		         bill=(quantity*150);
		         printf("cost of sandwich ordered %d\n",bill);
		         break;
		case'F': printf("no of french fries ordered\n");
		         printf("enter the quantity\n");
		         scanf("%d",&quantity);
		         bill=(quantity*50);
		         printf("cost of french fries ordered %d\n",bill);
		         break;
		case'P': printf("no of pizzas ordered\n");
		         printf("enter the quantity\n");
		         scanf("%d",&quantity);
		         bill=(quantity*500);
		         printf("cost of pizzas ordered %d\n",bill);
		         break;
		         
		default: printf("not in the menu\n");
    }
			
	
}
