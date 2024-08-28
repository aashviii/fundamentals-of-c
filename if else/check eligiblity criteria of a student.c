#include<stdio.h>
int main()
{
	int m,p,c;
	int totalmarks,totalmarksofmathsandphysics;
	printf("enter the marks of maths:");
	scanf("%d",&m);
	printf("enter the marks of physics:");
	scanf("%d",&p);
	printf("enter the marks of chemistry:");
	scanf("%d",&c);
	totalmarks= m+p+c;
	totalmarksofmathsandphysics=m+p;
	printf("Total marks of Mathematics, Physics and Chemistry: %d\n",totalmarks);
	printf("Total marks of Mathematics and Physics: %d\n",totalmarksofmathsandphysics);
	if (m >= 65 && p >= 55 && c >= 50 && totalmarks >= 190) {
        printf("The candidate is eligible for admission.\n");
    } else if (totalmarksofmathsandphysics >= 140){
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }
return 0;
	
}
