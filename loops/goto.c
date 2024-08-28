#include<stdio.h>
int main()
{
	
    int num,max=0,min=32767,sum=0,avg,cnt=0;
    again:
    printf("\nenter any positive number to continue and -1 to exit!:");
    if(scanf("%d",&num) && num!=-1)
    {
    	if(num>=0)
    	{ 
    	    if(num>=max)
    	    {
    	      max = num;
			}
			if(num<min)
			{
			  min = num;
			}
    	    sum= sum + num;	
    	    cnt++;
    		
		}
		else
		{
			printf("\nPlease enter the positive numbers only");
		}
	}
	if(num==-1)
	{
		goto again2;
	}
	goto again;
	     again2:
	printf("\nMin number= %d",min);
	printf("\nmax number= %d",max);
    printf("\nSum of the numbers is= %d",sum);
    printf("\nAvg of the numbers is= %d",sum / cnt);

}
