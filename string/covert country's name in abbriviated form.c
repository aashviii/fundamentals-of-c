#include<stdio.h>
#include<string.h>
int main()
{
	char countryname[200],abr[10];
	int i,j=0;
	printf("\nEnter the country's name = ");
	gets(countryname);
	int length = strlen(countryname);
	if(countryname[length-1]== '\n')
	{
		countryname[length-1]=='\0';
	}
	i=0;
	while(countryname[i]!='\0')
	{
		if((i==0 || countryname[i-1]==' ') && countryname[i]!=' ')
		{
			abr[j]= toupper(countryname[i]);
			j++;
		}
		i++;
	}
	printf("\nOriginal country name = %s",countryname);
	printf("\nAbbriviated country Name = %s",abr);
	return 0;
}
