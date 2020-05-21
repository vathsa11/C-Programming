#include<stdio.h>
int prime(int m,int n);
void main()
{
	int num,pr;
	printf("Enter a number:\n");
	scanf("%d",&num);
	pr=prime(num,num/2);
	if(pr==1)
	printf("%d is a prime number",num);
	else
	printf("%d is not a prime number",num);
}
int prime(int m,int n)
{
	if(n==1)
	return 1;
	else if(m%n==0)
	return 0;
	else
	prime(m,n-1);
}
