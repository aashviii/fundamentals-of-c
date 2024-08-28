#include<stdio.h>
int main()
{
	int salary,annualsalary;
	printf("enter the monthly salary:");
	scanf("%d",&salary);
	annualsalary = salary * 12;
	printf("the annual salary is: %d",annualsalary);
	return 0;
}
