#include<stdio.h>
int main()
{
	int num,reverse=0,rem;
	printf("\nEnter the number:");
	scanf("%d",&num);
	int copy = num;
	while(num!= 0)
	{
		rem = num%10;
		reverse=(reverse*10)+rem;
		num = num / 10;
	}
	printf("\nOriginal number is = %d",copy);
	printf("\nReverse number is = %d",reverse);
	return 0;
}
