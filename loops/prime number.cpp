#include<stdio.h>
int main()
{
	int i,n,cnt=0;
	printf("enter the number to check if its a prime number or not:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
	 if(n % i==0)
	 {
		cnt++;
	 }
    }
	if(cnt==0)
	{
		printf("\n%d is a prime number",n);
	}
	else{
		printf("\n%d is not a prime number",n);
	}
	return 0;
}
