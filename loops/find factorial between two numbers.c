#include<stdio.h>
int main()
{
	long int num1,num2,i,j,fact=1;
	printf("enter the first no:");
	scanf("%d",&num1);
	printf("enter the second no:");
	scanf("%d",&num2);
	for(i=num1;i<=num2;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		printf("\n factorial of %d is %d",i,fact);
	}
	return 0;
}
