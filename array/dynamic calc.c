#include<stdio.h>
int main()
{
	char choice;
	printf("+ for addition, - for subtraction, / for division, * multiplication ");
	scanf(" %c",&choice);
	int a[10][10],b[10][10],sum[10][10],sub[10][10],div[10][10],mul[10][10];
	int row,col,i,j;
	printf("\nEnter the row numbers =");
	scanf("%d",&row);
	printf("\nEnter the col numbers =");
	scanf("%d",&col);
	switch(choice)
	{
	case'+':
	for(i=0;i<row;i++)
	{
		for(j=0;j=col;j++)
		{
			printf("\nEnter  the element in a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j=col;j++)
		{
			printf("\nEnter  the element in b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]= a[i][j] + b[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",sum[i][j]);
		}
		printf("\n");
	}
	break;
	case'-':
	for(i=0;i<row;i++)
	{
		for(j=0;j=col;j++)
		{
			printf("\nEnter  the element in a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j=col;j++)
		{
			printf("\nEnter  the element in b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sub[i][j]= a[i][j] - b[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",sub[i][j]);
		}
		printf("\n");
	}
	break;


}
return 0;
}
