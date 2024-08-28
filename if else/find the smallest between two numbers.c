#include<stdio.h>
int main()
{
	int no1,no2;
	printf("enter any two numbers:");
	scanf("%d%d",&no1,&no2);
	if(no1>no2)
	{
		printf("no2 is smallest ");
	}
	else
	{
		printf("no1 is smallest");
	}
	return 0;
}
