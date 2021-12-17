#include<stdio.h>
main()
{
	int a,A,B,C,D,E,F;
	printf("enter the a value\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:("a>=90");
			printf("A grade %d\n",A);
			break;
		case 2:("a>=80");
			printf("B grade %d\n",B);
		    break;
		case 3:("a>=70");
			printf("C grade %d\n",C);
			break;
		case 4:("a>=60");
			printf("D grade %d\n",D);
			break;
		case 5:("a>=50");
			printf("E grade %d\n",E);
		    break;
		case 6:("a<50");
			printf("F grade %d\n",F);
			break;
		default:
			printf("no grade \n");
			break;
	}
}
