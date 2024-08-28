#include<stdio.h>
int main()
{
	int j,i,count=0,num[100],size;
	printf("enter the size of the array=");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("enter the elements in num[%d]=",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<size;i++)
	{
		count=0;
		for(j=0;j<size;j++)
		{
			if(i!=j)
			{
				if(num[i]==num[j])
				{
					count++;
				}
			}
		}
		if(count==0)
		{
			printf("%d",num[i]);
		}
	}
	return 0;
}
