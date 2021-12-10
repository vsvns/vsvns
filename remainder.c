#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the a value \n");
	scanf("%d",&a);
	printf("enter the b value \n");
	scanf("%d",&b);
	c=(a-(a/b)*b);
	printf("the value is c %d\n",c);
}
