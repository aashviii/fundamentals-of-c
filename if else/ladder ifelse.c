#include<stdio.h>
int main()
{
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if(age>18 && age<60)
	{
		printf("you can apply for driving license");
	}
	else if(age>60)
	{
		printf("you are old,you can rest now");
	}
	else if(age>16 && age<=18)
	{
		printf("you can apply for learning license");
	}
	else
	{
		printf("you are too young to apply for any kind of license");
	}
	return 0;
}
