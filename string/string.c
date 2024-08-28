#include<stdio.h>
#include<string.h>
int main()
{
	char name1[50],name2[20];
	printf("\nEnter the string here =");
	gets(name1);
	printf("\nEnter the string here =");
	gets(name2);
	printf("\n%s",name1);
	int length = strlen(name1);
	printf("\nLength of the string is = %d",length);
	printf("\nSize of the string is = %d",sizeof(name1));
	printf("\nString comparision = %d",strcmp(name1,name2));
	strcat(name1,name2);
	printf("\nConcated string = %s",name1);
	return 0;
}
