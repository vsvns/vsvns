#include<stdio.h>
main()
{
	float a,b,c,d,r1,r2,D,i;
    printf("enter the a value\n");
	scanf("%f",&a);
	printf("enter the b value\n");
	scanf("%f",&b);
	printf("enter the c value\n");
	scanf("%f",&c);
	d=(b*b-4*a*c);
	switch(d<0)
	{
		case 1:
			r1=((-b)*(sqrt(d/2*a)));
			r2=((-b)*(sqrt(d/2*a)));
			printf("the roots are imaginary %f\n");
		    break;
		case 0:
		    switch(d>0) 
			r1=((-b)+(sqrt(d/2*a)));
			r2=((-b)-(sqrt(d/2*a)));
			printf("the roots are real and distinct %f\n");
		    break;
		    default:
			(d=0);
		    r1=r2=(-b/2*a);		
			printf("the roots are equal %f\n");
	}
}
