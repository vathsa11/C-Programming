#include<stdio.h>
void main()
{
	int m=0;
	printf("Enter the marks:\n");
	scanf("%d",&m);
	if(m>=85)
	printf("Grade A");
	else if(m>=70&&m<=84)
	printf("Grade B");
	else if(m>=55&&m<=69)
	printf("Grade C");
	else if(m>=40&&m<=54)
	printf("Grade D");
	else
	printf("Grade F");
}
