#include<stdio.h>
main()
{
	char c;
	printf("enter some character \n");
	c=getchar();
	printf("%c\n",c++);
	printf("entered character is \n");
	putchar(c);
	printf("\n");
}
