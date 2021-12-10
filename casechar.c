#include<stdio.h>
main()
{
	char c;
	printf("enter the character\n");
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
			        printf("VOWEL");
			        break;
		default:
		printf("consonant");	
	}
}
