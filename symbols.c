#include<stdio.h>
main()
{
	char c ;int a;
   printf("enter the character\n");
   scanf("%c",&c);
   switch(c)
   {
   	case 'a'...'z':
    printf("it is a character %c\n",c);
    break;
    case'A'...'Z':
   	printf("it is a character %c\n",c);
   	break;
   	case'0'...'9':
   	printf("it is a number %d\n",a);
   	break;
   	default:
   	printf("it is a special character %c\n",c);
   }
		   	
}
