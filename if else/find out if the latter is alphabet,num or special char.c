#include<stdio.h>
int main()
{
	char x;
	printf("enter any letter:");
	scanf("%s",&x);
	if(x>='A' && x<='Z' || x>='a' && x<='z')
	{
		printf("the letter is alphabet");
	}
	else if(x>='0' && x<='9')
	{
		printf("the letter is number");
	}
	else
	{
		printf("the letter is special character");
	}
	return 0;
}
