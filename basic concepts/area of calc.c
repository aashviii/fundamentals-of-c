#include<stdio.h>
int main()
{
	float r,area,b,h;
	int choice,l,w,side;
	float pi=3.14;
	
	printf("1 for circle 2 for square 3 for rectangle 4 for triangle");
	scanf("%d",&choice);
	
	switch(choice)
	{
	case 1:
		printf("enter the radius");
		scanf("%f",&r);
		area=pi*r*r;
		printf("area of circle is %f",area);
		break;
	case 2:
		printf("enter the side");
		scanf("%d",&side);
		area=side*side;
		printf("area of square is %f",area);
		break;
	case 3:
		printf("enter the length and width");
		scanf("%d%d",&l,&w);
		area=l*w;
		printf("area of rectangle is %f",area);
		break;
	case 4:
		printf("enter the base and the height");
		scanf("%f%f",&h,&b);
		area=(b*h) / 2;
		printf("area of triangle is %f",area);
		break;
	default:
		printf("invalid");
		}
		return 0;
}
