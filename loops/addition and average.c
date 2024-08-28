#include<stdio.h>
int main()
{
	int n,b,i;
	int sum=0;
	printf("how many numbers do you want to add?:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the number=");
		scanf("%d",&b);
		sum=sum+b;
	}
	printf("your addition is: %d\n",sum);
	printf("the avg is: %d",sum/b);
	return 0;
	
}
