#include<stdio.h>
int main()
{
	int x;
	printf("enter any letter:");
	scanf("%d",&x);
	  if(x>='A' && x<='Z')
	  {
	  	printf("the letter is uppercase");
	  }
	  else if(x>='a' && x<='z')
	  {
	  	printf("the letter is lowercase");
	  }
	  else if(x>=0 && x<=9)
	  {
	  	printf("the letter is digit");
	  }
	  else
	  {
	  	printf("the letter is special character");
	  }
	  return 0;
}
