#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the a value\n");
	scanf("%d",&a);
	printf("enter the b value\n");
	scanf("%d",&b);
	printf("enter the c value\n");
	scanf("%d",&c);
	if(a<b && a<c)
	printf("a is less than both b and c\n",a);
	else if(b<a && b<c)
	printf("b is less tha both a and c",b);
	else if(c<a && c<b)
	printf("c is less than both a and b",c);

}
