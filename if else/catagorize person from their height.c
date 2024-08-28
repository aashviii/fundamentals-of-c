#include<stdio.h>
int main()
{
	float height;
	printf("enter your height:");
	scanf("%d",&height);
	if(height < 150)
	{
		printf("you have a smaller height");
	}
	else if(height > 150 && height < 165)
	{
		printf("you have an average height");
	}
	else if(height > 165 && height > 175)
	{
		printf("you are tall");
	}
	else 
	{
		printf("you are very tall");
	}
	return 0;
}
