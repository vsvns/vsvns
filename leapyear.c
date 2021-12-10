#include<stdio.h>
main()
{
	int a;
	printf("enter the a value \n");
	scanf("%d",a);
	if(a%4==0 && a%400==0 || a%100!=0)
	{
	printf("it is a leap year \n");
	
	}
}
