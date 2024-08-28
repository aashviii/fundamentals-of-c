#include<stdio.h>
int main()
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter the element in arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);
	}
	return 0;
}
