#include<stdio.h>
int main()
{
	char choice;
	printf("+ for additiom,- for subtraction,* for multiplication,/ for division,%% for modulo");
	scanf("%c",&choice);
	int ans;
	int n1,n2;
	printf("enter 2 numbers");
	scanf("%d%d",&n1,&n2);
	switch(choice)
	{
		case'+':
			ans=n1+n2;
			printf("%d is addition",ans);
			break;
		case'-':
			ans=n1-n2;
			printf("%d is subtrction",ans);
			break;
		case'*':
			ans=n1*n2;
			printf("%d is multiplication",ans);
			break;
		case'/':
			if(n2!=0)
			{
			ans=n1/n2;
			printf("%d is division",ans);
	    	}
	    	else{
	    		printf("can't devide by zero");
			}
			break;		
		case'%':
			ans=n1%n2;
			printf("%d is modulo",ans);
			break;	
		default:
		printf("invalid character");	
	}
	return 0;
}
