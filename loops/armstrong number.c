#include<stdio.h>
int main()
{
	int num,copy,p,sum=0;
	printf("\nEnter the number:");
	scanf("%d",&num);
	copy = num;
	while(num>0)
	{
		p=num%10;
		num=num/10;
		sum=sum+p*p*p*p;
	}
	if(sum==copy)
	{
		printf("it is a armstrong number:");
	}
	else
	{
		printf("it is not a armstrong number:");
	}
	return 0;
}
