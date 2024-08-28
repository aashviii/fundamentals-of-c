#include<stdio.h>
int main()
{
	float sci,maths,english,total,pr;
	printf("enter the marks of sci out of 100:");
	scanf("%f",&sci);
	printf("enter the marks of maths out of 100:");
	scanf("%f",&maths);
	printf("enter the marks of eng out of 100:");
	scanf("%f",&english);
	total=sci+maths+english;
	pr=(total/300)*100;
	printf("the percentage are %f:",pr,total);
	if(pr>80)
	{
		printf("\nyou have goten A+");
	}
	else if(pr>60 && pr<80)
	{
		printf("\nyou have goten b+");
	}
	else if(pr>35 && pr<60)
	{
		printf("\npass");
	}
	else
	{
		printf("\nfail");
	}
	return 0;
}
