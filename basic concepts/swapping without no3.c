//swapping without taking no3
#include<stdio.h>
int main()
{
	int no1,no2;
	printf("enter any two numbers");
	scanf("%d %d",&no1,&no2);
	printf("\nbefore swapping the value no1 is %d and no2 is %d",no1,no2);
	no1=no1+no2;
	no2=no1-no2;
	no1=no1-no2;
	printf("\nbefore swapping the value no1 is %d and no2 is %d",no1,no2);
}
