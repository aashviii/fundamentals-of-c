#include<stdio.h>
int main()
{
	int no1,no2,no3;
	printf("enter any three numbers:");
	scanf("%d%d%d",&no1,&no2,&no3);
	if(no1>no2 && no1>no3)
	{
		printf("no 1 is largest");
	}
	else if(no2>no1 && no2>no3)
	{
		printf("no 2 is largest");
	}
	else
	{
		printf("no3 is largest");
	}
	return 0;
}
