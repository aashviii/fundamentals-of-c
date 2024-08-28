#include<stdio.h>
int main()
{
    float sp,cp,profit,loss;
	printf("enter the cost price:");
	scanf("%f",&cp);
	printf("enter the selling price:");
	scanf("%f",&sp);
	if(sp>cp)
	{
		profit=sp-cp;
		printf("profit= %2f\n",profit);
	}
	else if(cp>sp)
	{
		loss=cp-sp;
		printf("loss= %2f\n",loss);
	}
	else
	{
		printf("no profit no loss!");
	}
	return 0;

}
