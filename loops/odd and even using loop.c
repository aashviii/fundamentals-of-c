#include<stdio.h>
int main()
{
	int choice;
	printf(" enter 1 for even or enter 2 for odd");
	scanf("%d",&choice);
	int a,b,i;
	printf("enter any two numbers");
	scanf("%d%d",&a,&b);
	switch(choice)
	{
		case 1:
			for(i=a;i<=b;i++)
			{
				if(i%2==0)
				{
					printf("%d\n",i);
				}
			}
			break;
		case 2:
			for(i=a;i<=b;i++)
			{
				if(i%2!=0)
				{
					printf("%d\n",i);
				}
			}
			break;
	}
	return 0;
}
