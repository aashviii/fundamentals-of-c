#include<stdio.h>
int main()
{
	float salary,insurance,loan,remainingsalary;
	printf("enter your monthly salary");
	scanf("%f",&salary);
	insurance= 0.10 * salary;
	loan= 0.10 * salary;
	remainingsalary= salary - (insurance + loan);
	printf("after deducting insurance and loan the remaining salary is %f:",insurance,loan,remainingsalary);
	return 0;
}
