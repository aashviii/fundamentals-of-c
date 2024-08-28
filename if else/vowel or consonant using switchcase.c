#include<stdio.h>
int main()
{
	char choice;
	printf("enter any alphabet:");
	scanf("%c",&choice);
	switch(choice)
	{
		case 'a':
		    printf("the letter is vowel");
		    break;
		case 'e':
		    printf("the letter is vowel");
		    break;
		case 'i':
		    printf("the letter is vowel");
		    break;
		case 'o':
		    printf("the letter is vowel");
		    break;
		case 'u':
		    printf("the letter is vowel");
		    break;
		default:
			printf("the letter is consonant");
	}
	return 0;
}
