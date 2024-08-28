#include<stdio.h>
int main()
{
	float pi=3.14;
	float r,circumference;
	printf("enter the circumference of circle:");
	scanf("%f",&r);
	circumference=2*pi*r;
	printf("the circumference of circle is: %f",circumference);
	return 0;
}
