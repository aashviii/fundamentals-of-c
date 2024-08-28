#include<stdio.h>
int main()
{
	int a,b,c,min;
	printf("enter any three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	min = (a<b && a<c)?a:(b<c?b:c);
	printf("the smallest number is %d",min);
	return 0;
}
