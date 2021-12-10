#include<stdio.h>
main()
{
	int a,b;
	printf("enter the a units\n");
	scanf("%c",&a);
	if(a<=50)
	{
	  b=(a*1);
	}
	else if(a<=100)
	{
		b=(a*2)+(a*1);
	}
	else if(a<=200)
	{
	    b=((a*3)+(a*2)+(a*1));
    }
}
		

