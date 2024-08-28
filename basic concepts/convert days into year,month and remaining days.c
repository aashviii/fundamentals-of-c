#include<stdio.h>
int main()
{
	int days,year,month;
	printf("enter total number of days");
	scanf("%d",&days);
	year=days/365;
	days=days%365;
	month=days/30;
	days=days%30;
	
	printf("%d is year %d is month %d is remaining days",year,month,days);
	
	
return 0;
}
	
