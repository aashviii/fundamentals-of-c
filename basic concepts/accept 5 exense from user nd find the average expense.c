#include<stdio.h>
int main()
{
	char name1,name2,name3,name4,name5;
	float expense1,expense2,expense3,expense4,expense5;
	float totalexpense,averageexpense;
	printf("enter the name of the expense 1 and its amount:");
	scanf("%s%f",&name1,&expense1);
	printf("enter the name of the expense 2 and its amount:");
	scanf("%s%f",&name2,&expense2);
	printf("enter the name of the expense 3 and its amount:");
	scanf("%s%f",&name3,&expense3);
	printf("enter the name of the expense 4 and its amount:");
	scanf("%s%f",&name4,&expense4);
	printf("enter the name of the expense 5 and its amount:");
	scanf("%s%f",&name5,&expense5);
	
	totalexpense= expense1+expense2+expense3+expense4+expense5;
	averageexpense=totalexpense/5;
	
	printf("total expense is:%f",totalexpense);
	printf("Average expense is:%f",averageexpense);
	return 0;
	
}
