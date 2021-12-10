#include<stdio.h>
main()
{
	char c;
	printf("entered character is %c\n",c);
	scanf("%c",&c);
	printf("enter the character is %c\n",c);
	printf("its ASCII value is %d\n",c);
	printf("enter another character\n");
	fflush(stdin);
	c=getchar();
	printf("entered character \n");
	putchar(c);
	printf("its ASCII value is %d\n",c);
}
