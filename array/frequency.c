#include<stdio.h>
int main()
{
	int i,j,size,num[100],f[100],count;
	
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in num[%d] = ",i);
		scanf("%d",&num[i]);
		f[i]=-1;
	}
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(num[i]==num[j])
			{
				count++;
				f[j] = 0;
			}
		}
		if(f[i]!=0)
		{
			f[i] = count;
		}
	}
	for(i=0;i<size;i++)
	{
		if(f[i]!=0)
		{
			printf("\n%d occurs %d times",num[i],f[i]);
		}
	}
	
	return 0;
}
