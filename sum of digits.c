#include<stdio.h>
int sod(int n);
void main()
{
	int num,sum=0;
	printf("Enter a number:\n");
	scanf("%d",&num);
	sum=sod(num);
	printf("Sum of digits: %d",sum);
}
int sod(int n)
{
	if(n==0)
	return 0;
	return ((n%10)+sod(n/10));
}
