#include<stdio.h>
int main(){
	int i,j;
	int a[100],b[100],c[200];
	int sizea,sizeb;
	
	//taking the size of array sizea
	printf("Enter the size of array a = ");
	scanf("%d",&sizea);
	
	//taking value and strong into array
	for(i=0;i<sizea;i++){
		printf("\nEnter the size of array a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	//taking the size of array sizeb
	printf("\nEnter the size of array b = ");
	scanf("%d",&sizeb);
	
	//taking value and strong into array
	for(i=0;i<sizeb;i++){
		printf("\nEnter the size of array b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	
	//merging a into c
	for(i=0;i<sizea;i++){
		c[i] = a[i];
	}
	
	for(j=0;j<sizeb;j++){
		c[i] = b[j];
		i++;
	}
	
	printf("\nA Array = ");
	for(i=0;i<sizea;i++){
		printf("%d\t",a[i]);
	}
	
	printf("\nB Array = ");
	for(i=0;i<sizeb;i++){
		printf("%d\t",b[i]);
	}
	
	printf("\nC Array = ");
	for(i=0;i<sizea+sizeb;i++){
		printf("%d\t",c[i]);
	}
	
	return 0;
}
