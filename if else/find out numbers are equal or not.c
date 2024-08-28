#include<stdio.h>
int main()
{
	int no1,no2;
	printf("enter any two numbers:");
	scanf("%d%d",&no1,&no2);
	if(no1==no2)
	{
		printf("both numbers are same");
	}
	else
	{
		printf("both numbers are different");
	}
	return 0;
}
