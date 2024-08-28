#include<stdio.h>
int main()
{
	char emp1,emp2,emp3,emp4,emp5;
	float salary1,salary2,salary3,salary4,salary5;
	float totalsalary,averagesalary;
	
	printf("enter the name and the salary of emp1:");
	scanf("%s%f",&emp1,&salary1);
	printf("enter the name and the salary of emp2:");
	scanf("%s%f",&emp2,&salary2);
	printf("enter the name and the salary of emp3:");
	scanf("%s%f",&emp3,&salary3);
	printf("enter the name and the salary of emp4:");
	scanf("%s%f",&emp4,&salary4);
	printf("enter the name and the salary of emp5:");
	scanf("%s%f",&emp5,&salary5);
	
	totalsalary= salary1+salary2+salary3+salary4+salary5;
	averagesalary = totalsalary/5;
	
	printf("total salary is: %f",totalsalary);
	printf("average salary is: %f",averagesalary);
	
	return 0;
	
}
