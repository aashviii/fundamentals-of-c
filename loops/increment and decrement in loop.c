#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter any two numbers:");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		for(i=a;i<=b;i++)
		{
		printf("%d\n",i);
	    }
	}
	else
	{
		for(i=a;i>=b;i--)
		{
		printf("%d\n",i);
        }
	}
	return 0;
}
