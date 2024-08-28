#include<stdio.h>
int main()
{
	float insurance,salary,premiumrate,annualpremium;
	premiumrate=0.10;
	printf("enter the annual salary:");
	scanf("%f",&salary);
	annualpremium = salary*premiumrate;
	printf("your annual insurance premium is: %f\n",annualpremium);
	return 0;
}
