#include<stdio.h>
int main()
{
	int num,sum=0,i,a;
	printf("enter the number=");
	scanf("%d",&num);
	i=num % 10;
	printf("\nlast digit is %d",i);
	while(num > 10)
	{
		num = num /10;
	}
	printf("\nFirst digit is %d",num);
	sum = sum +num + i;
	printf("\nthe sum is=%d",sum);
	return 0;
}
