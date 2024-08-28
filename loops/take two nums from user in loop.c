#include<stdio.h>
int main()
{
	int i,a,b;
	printf("enter any two numbers:");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		printf("%d\t",i);
	}
	return 0;
}
