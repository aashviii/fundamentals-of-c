#include<stdio.h>
int main()
{
	char x;
	printf("enter any letter:");
	scanf("%c",&x);
	if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
	{
		printf("the letter is vowel");
	}
	else
	{
		printf("the letter is consonant");
	}
	return 0;
}
