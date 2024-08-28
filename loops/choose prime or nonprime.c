//take two num from user and print prime and nonprime number between them
#include<stdio.h>
int main()
{
	int choice,num,i,start,end,j,cnt=0;
	printf("\nenter the starting number:");
	scanf("%d",&start);
	printf("\nenter the ending number:");
	scanf("%d",&end);
	printf("enter 1 for prime and enter 2 for nonprime:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nPrime number");
			for(i=start;i<=end;i++)
			{
				cnt=0;
				for(j=2;j<i;j++)
				{
					if(i%j==0)
					{
						cnt++;
					}
				}
				if(cnt==0)
				{
					printf("\n%d",i);
				}
			}
			break;
			case 2:
				printf("Non prime numbers");
				for(i=start;i<=end;i++)
			{
				cnt=0;
				for(j=2;j<i;j++)
				{
					if(i%j==0)
					{
						cnt++;
					}
				}
				if(cnt!=0)
				{
					printf("\n%d",i);
				}
			}
			break;
			default:
				printf("Invalid");
				
			
	}
 return 0;
}

