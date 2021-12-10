#include<stdio.h>
main()
{
	int a;
	printf("enter the a value\n");
	scanf("%d",&a);
    switch(a)
    {
    	case 1:
    		printf("SUNDAY\n");
    		break;
    	case 2:
		    printf("MONDAY\n");
		    break;
		case 3:
		    printf("TUESDAY\n");
		    break;
		case 4:
			printf("WEDNESDAY\n");
			break;
		case 5:
			printf("THRUSDAY\n");
			break;
		case 6:
			printf("FRIDAY\n");
			break;
		case 7:
			printf("SATURDAY\n");
			break;
        default:
        	printf("entered the number more than 7\n");
	}
}
