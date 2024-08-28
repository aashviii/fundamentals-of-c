#include<stdio.h>
int main()
{
	int num1 = 45,num2 = 50;
	int *ptr = &num1;
	printf("\n%d",&num1);
	printf("\n%p",ptr);
	printf("\n%d",*ptr);
	return 0;
}
