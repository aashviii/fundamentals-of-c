#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks:");
	scanf("%d",&marks);
	if(marks<0 || marks>100)
	{
		printf("invalid marks! please enter marks between 0 and 100./n");
		scanf("%d",&marks);
	}
	else if(marks>=35)
	{
		printf("congratulations! you have passed the exams");
	 } 
	 else
	 {
	 	printf("you have failed,try again");
	 }
	 return 0;
}
