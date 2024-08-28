#include<stdio.h>
int main()
{
	int arr[5],j,a,i,choice;
	printf("1.Ascenging\n");
	printf("2.Descending\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
	case 1:
		for(i=0;i<5;i++)
     	{
		printf("enter number: ");
		scanf("%d",&arr[i]);
	    }
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp; 
			}
		}
	}
	printf("The numbers in ascending order is: ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	break;
	case 2:
		for(i=0;i<5;i++)
     	{
		printf("enter number: ");
		scanf("%d",&arr[i]);
	    }
	for(i=0;i<5;++i)
	{
		for(j=i+1;j<5;++j)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp; 
			}
		}
	}
	printf("The numbers in descending order is: ");
	for(i=4;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
	break;
	default:
			printf("Enter a valid choice!!");
}
return 0;
}
