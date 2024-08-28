#include<stdio.h>
int main()
{
	int no;
	printf("enter the number:");
	scanf("%d",&no);
	if(no>0)
	{
		printf("number is positive");
	}
	else if(no<0)
	{
		printf("number is nagative");
	}
	else
	{
		printf("no is zero");
	}
	return 0;
}
