#include<stdio.h>
main()
{
	char c;
	printf("enter a character\n");
	scanf("%c",&c);
	printf("entered character is %c",c);
	if(c>=65&&c<=90)
	{
		c=c+32;
		printf("\n converted character is:%c",c);
	}
	else if(c=c-32)
	printf("\n converted character is:%c",c);
}
