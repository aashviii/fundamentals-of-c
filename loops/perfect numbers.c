#include<stdio.h>
int main()
{
	int num,devider=0,sum=0,i;
	printf("enter the number:");
	scanf("%d",&num);
	for(i = 1; i < num;i++)
	{
		if(num % i==0)
		{
			sum = sum + i;
			
		}
	}
	if(num == sum)
	{
		printf("it is a Perfect number");
	}
	else
	{
		printf("it is Not a perfect number");
	}
	return 0;
}
