#include<stdio.h>
main()
{
	int a;
	printf("enter the a value \n");
	scanf("%d",&a);
	if(a%3==0)
{
	printf("a is divisible by 3 \n",a);
}
    if(a%5==0)
{
	printf("a is divisible by 5 \n",a);
}
   if(a%3==0 && a%5==0) 
{
   	printf("a is divisible by both 3 and 5 \n",a);
}
}
