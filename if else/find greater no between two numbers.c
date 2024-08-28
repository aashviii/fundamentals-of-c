#include<stdio.h>
int main()
{
	int no1,no2;
	printf("enter any two numbers:");
	scanf("%d%d",&no1,&no2);
	if(no1>no2)
	{
		printf("no1 is greater");
	}
	else
	{
		printf("no2 is greater");
	}
	return 0;
}
