#include<stdio.h>
main()
{
	char c;
	printf("entered character is \n");
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
		case 'e':
	    case 'i':
	    case 'o':
	    case 'u':
	    case 'A':
	    case 'E':
	    case 'I':
	    case 'O':
	    case 'U':
	    	printf("vowel");
	    	break;
	    {
		case (c=c-32):
	    case(c=c+32):
	    printf("it is a character %c\n");
	    }
	    case 0:
	    	switch(c>0&&c<9)
	    	printf("it is a number %d\n");
	    	break;
	    default:
	    	printf("special character\n");
	    	break;
	   }
	}
}
}

