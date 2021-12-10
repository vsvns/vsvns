#include<stdio.h>
main()
{
	int a,b,op,c;
	printf("enter the a value\n");
	scanf("%d",&a);
	printf("enter the b value\n");
	scanf("%d",&b);
	op=('+','-','*','/','%');
	switch(op)
	{
		case'+':
			printf("sum of two numbers\n",a+b);
			break;
		case'-':
			printf("difference of two numbers\n",a-b);
			break;
		case'*':
			printf("multiplication of two numbers\n",a*b);
			break;
		case'/':
			printf("division of two numbers\n",a/b);
			break;
		case'%':
			printf("% of two numbers\n",a%b);
			break;
		default:
			printf("other than given operands\n");
	}
}
