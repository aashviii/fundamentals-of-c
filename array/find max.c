#include<stdio.h>
int findmax(int arr[],int size)
	{
	   int max = arr[0];
	   int i,size;
		for(i=0,i<size,i++)
		{
			if(arr[i]>max)
			{
				max=arr[i];
			}
		}
		return max;
	}
 int findmax(int arr[],int max)
 {
     int array[]={3,1,4,5,6,7,8,2,6,5,3};
     int size = sizeof(array);
     int maxnumber = findmax(array,size);
     printf("\nThe maximum number is = %d\n",maxnumber);
     return 0;
}
