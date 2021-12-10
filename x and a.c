#include<stdio.h>
main()
{
	float x,y,z,a;
	printf("enter the value of x \n");
	scanf("%f",&x);
	printf("enter the value of y \n");
	scanf("%f,&y");
	z=sqrt((x*x+y*y)/(x*x+1));
	printf("z of the given value %f \n",z);
	a=sqrt((x*x+y*y)/(x*x-y*y));
	printf("a of the given value %f\n",a);
}

