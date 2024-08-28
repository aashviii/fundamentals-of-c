#include<stdio.h>
int main()
{
	long int range,i,num1=0,num2=1,num3;
	printf("enter the range=");
	scanf("%d",&range);
	printf("\n%d\t%d\t",num1,num2);
	for(i=1;i<=range-2;i++)
	{
		num3 = num1+num2;
		printf("%d\t",num3);
		num1=num2;
		num2=num3;
	}
	return 0;
}
