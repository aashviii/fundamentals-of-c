#include<stdio.h>
int main()
{
	int angle1,angle2,angle3;
	printf("enter the three angles of triangle");
	scanf("%d%d%d",&angle1,&angle2,&angle3);
	if(angle1+angle2+angle3==180  && angle1 > 0 && angle2 > 0 && angle3 > 0)
	{
		printf("these angles can be formed into triangle");
	}
	else
	{
		printf("these angles can not be formed into triangle");
	}
	return 0;
}
