#include<stdio.h>
int main()
{
	int n1,n2,i;
	printf("TABLE\n");
	printf("\nenter the number:");
	scanf("%d",&n1);
	printf("\nenter the range:");
	scanf("%d",&n2);
	for(i=1;i<=n2;i++)
	{
		printf("\n%d x %d = %d",n1,i,n1*i);
	}
	return 0;
}
