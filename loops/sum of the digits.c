#include<stdio.h>
int main()
{
	int num,b,i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num != 0)
	{
		i=num % 10;
		num = num / 10;
		sum = sum + i;
	}
	printf("the sum of the digits is = %d",sum);
	return 0;
}
