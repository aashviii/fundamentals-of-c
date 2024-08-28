#include<stdio.h>
int main()
{
	int basicsalary,HRA,DA,grosssalary;
	printf("enter your basic salary");
    scanf("%d",&basicsalary);
    if(basicsalary<=10000)
    {
    	HRA=basicsalary*0.20;
    	DA=basicsalary*0.80;
    	grosssalary=basicsalary+HRA+DA;
    	printf("your gross salary is %d",grosssalary);
	}
	else if(basicsalary<=20000)
    {
    	HRA=basicsalary*0.25;
    	DA=basicsalary*0.90;
    	grosssalary=basicsalary+HRA+DA;
    	printf("your gross salary is %d",grosssalary);
    }
    else
    {
    	HRA=basicsalary*0.30;
    	DA=basicsalary*0.95;
    	grosssalary=basicsalary+HRA+DA;
    	printf("your gross salary is %d",grosssalary);
	}
	return 0;
	
}
