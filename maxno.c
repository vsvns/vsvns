#include<stdio.h>
main()
{
	int a,b,max;
	printf("enter the a value\n");
	scanf("%d",&a);
	printf("enter the b value\n");
	scanf("%d",&b);
	switch(a>b)
	{
		case 1:
		printf("a is maximum %d\n",max);
		break;
		case 0:
		printf("b is maximum %d\n",max);
		break;
		default:
			printf("not maximum\n");		
	}
}
