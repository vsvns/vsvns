#include<stdio.h>
main()
{
	int a,A,B,C,D,E,F;
	printf("enter the value of a \n");
	scanf("%d",&a);
	if(a>=90)
{
	printf("a scored A grade \n",A);
}
	else if(a>=80)
{
	printf("a scored B grade \n",B);
}
	else if(a>=70)
{
	printf("a scored C grade \n",C);
}
	else if(a>=60)
{
	printf("a scored D grade \n",D);
}
	else if(a>=50)
{
	printf("a scored E grade \n",E);
}
	else if(a<50)
{
	printf("a scored F grade \n",F);
}
}
