#include<stdio.h>
int main()
{
	int students,applesperstudent=5,totalapples;
	printf("enter the number of students:");
	scanf("%d",&students);
	totalapples= students * applesperstudent;
	printf("total number of apples required is %d:",totalapples);
	return 0;
}
